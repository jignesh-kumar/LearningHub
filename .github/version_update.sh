#!/bin/bash

# Define the full path to git if necessary
GIT_CMD="/usr/bin/git"

# Function to get the latest tag
get_latest_tag() {
    latest_tag_commit=$($GIT_CMD rev-list --tags --max-count=1)
    if [[ -z "$latest_tag_commit" ]]; then
        echo "0.0.0"
        return
    fi
    latest_tag=$($GIT_CMD describe --tags "$latest_tag_commit")
    echo "$latest_tag"
}


# Function to read the current version from the latest tag
read_current_version() {
  latest_tag=$(get_latest_tag)
  if [[ -z "$latest_tag" ]]; then
    echo "0.0.0"
  else
    echo "${latest_tag%%+*}"  # Remove the commit hash part if it exists
  fi
}

# Function to increment the version based on the PR description
increment_version() {
  current_version=$1
  IFS='.' read -r -a version_parts <<< "$current_version"
  major=${version_parts[0]}
  minor=${version_parts[1]}
  patch=${version_parts[2]}

  if [[ "$2" == "Major" ]]; then
    major=$((major + 1))
    minor=0
    patch=0
  elif [[ "$2" == "Minor" ]]; then
    minor=$((minor + 1))
    patch=0
  else
    patch=$((patch + 1))
  fi

  new_version="${major}.${minor}.${patch}"
  echo "$new_version"
}

# Get the latest commit hash
commit_hash=$($GIT_CMD rev-parse --short HEAD)

# Read the current version from the latest tag
current_version=$(read_current_version)
echo "current_version: ${current_version}"

# Determine the version type from the PR description (default to "Patch")
version_type="Patch"
pr_description=$($GIT_CMD log -1 --pretty=%B)
if [[ "$pr_description" == *"[Major]"* ]]; then
  version_type="Major"
elif [[ "$pr_description" == *"[Minor]"* ]]; then
  version_type="Minor"
fi

echo "version_type: ${version_type}"

# Increment the version
new_version=$(increment_version "$current_version" "$version_type")

# Create the full version with the commit hash
full_version="${new_version}+${commit_hash}"

# Create the new tag (uncomment the lines below to create and push the tag)
$GIT_CMD tag -a "$full_version" -m "Release version $full_version"
$GIT_CMD push origin "$full_version"

# Output the new version
echo "New version is: $full_version"

