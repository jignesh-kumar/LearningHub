import subprocess
import re
import os

# Function to get the latest tag
def get_latest_tag():
    latest_tag = os.popen("git describe --tags `git rev-list --tags --max-count=1`").read().strip()
    return latest_tag

# Function to read the current version from the latest tag
def read_current_version():
    latest_tag = get_latest_tag()
    print(f"Current version is: {latest_tag}")
    if not latest_tag:
        return "0.0.0"
    return re.sub(r'\+.*$', '', latest_tag)  # Remove the commit hash part if it exists

# Function to increment the version based on the PR description
def increment_version(current_version, version_type):
    version_parts = list(map(int, current_version.split('.')))
    major, minor, patch = version_parts[0], version_parts[1], version_parts[2]

    if version_type == "Major":
        major += 1
        minor = 0
        patch = 0
    elif version_type == "Minor":
        minor += 1
        patch = 0
    else:
        patch += 1

    new_version = f"{major}.{minor}.{patch}"
    return new_version

# Get the latest commit hash
commit_hash = subprocess.run(['git', 'rev-parse', '--short', 'HEAD'], capture_output=True, text=True).stdout.strip()

# Read the current version from the latest tag
current_version = read_current_version()

# Determine the version type from the PR description (default to "Patch")
version_type = "Patch"
pr_description = subprocess.run(['git', 'log', '-1', '--pretty=%B'], capture_output=True, text=True).stdout.strip()
if "[Major]" in pr_description:
    version_type = "Major"
elif "[Minor]" in pr_description:
    version_type = "Minor"

# Increment the version
new_version = increment_version(current_version, version_type)

# Create the full version with the commit hash
full_version = f"{new_version}+{commit_hash}"

# Create the new tag
subprocess.run(['git', 'tag', '-a', full_version, '-m', f"Release version {full_version}"])
subprocess.run(['git', 'push', 'origin', full_version])

# Output the new version
print(f"New version is: {full_version}")
