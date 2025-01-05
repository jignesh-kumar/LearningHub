import subprocess
import re

def get_git_commit_hash():
    result = subprocess.run(['git', 'rev-parse', '--short', 'HEAD'], capture_output=True, text=True)
    return result.stdout.strip()

def read_base_version():
    try:
        with open('.github/base_version.txt', 'r') as file:
            return file.read().strip()
    except FileNotFoundError:
        return "1.0"

def write_base_version(version):
    with open('.github/base_version.txt', 'w') as file:
        file.write(version)

def update_base_version():
    base_version = read_base_version()
    match = re.match(r'(\d+)\.(\d+)', base_version)
    if match:
        major, minor = map(int, match.groups())
        minor += 1  # Increment the minor version for each PR merge
        new_base_version = f"{major}.{minor}"
        write_base_version(new_base_version)
        return new_base_version
    return base_version

def generate_version_file():
    commit_hash = get_git_commit_hash()
    base_version = update_base_version()
    full_version = f"{base_version}+{commit_hash}"
    with open('.github/version.txt', 'w') as file:
        file.write(full_version)
    print(f"Version file created with version: {full_version}")

if __name__ == "__main__":
    generate_version_file()
