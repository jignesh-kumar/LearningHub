[![Contributors][contributors-shield]][contributors-url]
[![Pull Requests][pull-requests-shield]][pull-requests-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stargazers-shield]][stargazers-url]
[![Issues][issues-shield]][issues-url]
[![Watchers][watchers-shield]][watchers-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

[contributors-shield]: https://img.shields.io/github/contributors/jignesh-kumar/LearningHub.svg?style=for-the-badge
[contributors-url]: https://github.com/jignesh-kumar/LearningHub/graphs/contributors
[pull-requests-shield]: https://img.shields.io/github/issues-pr/jignesh-kumar/LearningHub.svg?style=for-the-badge
[pull-requests-url]: https://github.com/jignesh-kumar/LearningHub/pulls
[forks-shield]: https://img.shields.io/github/forks/jignesh-kumar/LearningHub.svg?style=for-the-badge
[forks-url]: https://github.com/jignesh-kumar/LearningHub/network/members
[stargazers-shield]: https://img.shields.io/github/stars/jignesh-kumar/LearningHub.svg?style=for-the-badge
[stargazers-url]: https://github.com/jignesh-kumar/LearningHub/stargazers
[issues-shield]: https://img.shields.io/github/issues/jignesh-kumar/LearningHub.svg?style=for-the-badge
[issues-url]: https://github.com/jignesh-kumar/LearningHub/issues
[watchers-shield]: https://img.shields.io/github/watchers/jignesh-kumar/LearningHub.svg?style=for-the-badge
[watchers-url]: https://github.com/jignesh-kumar/LearningHub/watchers
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/jigneshkumar-vadaviya/


# LearningHub
This repo is for the Learning purpose

### Build this application using conan 2

#### First install conan in your linux development machine
> - sudo apt-get update
> - sudo apt install python3-pip
> - sudo pip install conan==2.0.17

#### Create default conan profile in your development machine
> - conan profile detect --name default

#### Now use following steps to compile code
> - conan install . --output-folder build
> - conan build . --output-folder build
