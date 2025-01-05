import subprocess
import re

def get_git_commit_hash():
    result = subprocess.run(['git', 'rev-parse', '--short', 'HEAD'], capture_output=True, text=True)
    return result.stdout.strip()

def read_version_file():
    try:
        with open('version.txt', 'r') as file:
            return file.read().strip()
    except FileNotFoundError:
        return "1.0"

def write_version_file(full_version):
    with open('version.txt', 'w') as file:
        file.write(full_version + "\n")

def update_base_version():
    version_content = read_version_file()
    base_version_match = re.search(r'(\d+\.\d+)', version_content)
    if base_version_match:
        base_version = base_version_match.group(1)
        major, minor = map(int, base_version.split('.'))
        minor += 1  # Increment the minor version for each PR merge
        new_base_version = f"{major}.{minor}"
        return new_base_version
    return "1.0"

def generate_version_file():
    commit_hash = get_git_commit_hash()
    base_version = update_base_version()
    full_version = f"{base_version}+{commit_hash}"
    write_version_file(full_version)
    print(f"Version file created with version: {full_version}")

if __name__ == "__main__":
    generate_version_file()
