import os
from conan import ConanFile
from conan.tools.cmake import CMake, CMakeToolchain, CMakeDeps, cmake_layout
import subprocess
import sys

def get_latest_tag():
    try:
        rev_list = subprocess.run(
            ["git", "rev-list", "--tags", "--max-count=1"],
            check=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
        )
        revision = rev_list.stdout.decode().strip()
        if not revision:
            return "1.0.0"

        describe = subprocess.run(
            ["git", "describe", "--tags", revision],
            check=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
        )
        latest_tag = describe.stdout.decode().strip()
        return latest_tag or "1.0.0"
    except Exception:
        return "1.0.0"


class LearningHub(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    name = "learning-hub"
    url = "https://github.com/jignesh-kumar/LearningHub"
    version = get_latest_tag()
    scm = {
        "type": "git",
        "url": "git@github.com:jignesh-kumar/LearningHub.git",
        "revision": "auto"
    }

    # Sources are located in the same place as this recipe, copy them to the recipe
    exports_sources = "CMakeLists.txt", "*"

    def build_requirements(self):
        self.tool_requires("cmake/3.30.5")

    def generate(self):
        tc = CMakeToolchain(self)
        tc.generate()
        deps = CMakeDeps(self)
        deps.generate()

    def run_astyle(self):
        astyle_path = self.which("astyle")
        if not astyle_path:
            self.output.info(
                "astyle is not installed. Skipping code formatting. Suggesting to install astyle: sudo apt-get install -y astyle"
            )
            return

        self.output.info("Running astyle to format source files")
        for root, _, files in os.walk(self.source_folder):
            for filename in files:
                if filename.endswith((".cpp", ".h")):
                    file_path = os.path.join(root, filename)
                    self.output.info(f"Formatting {file_path}")
                    subprocess.run(
                        [
                            astyle_path,
                            "--style=linux",
                            "--suffix=none",
                            "--indent=spaces=4",
                            "--add-brackets",
                            file_path,
                        ],
                        check=False,
                    )

    def which(self, program):
        import shutil
        return shutil.which(program)

    def build(self):
        self.run_astyle()
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()

    def layout(self):
        cmake_layout(self)
