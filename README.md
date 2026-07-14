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

LearningHub is a personal learning repository for C++ and Python concepts. It is organized for hands-on practice, quick revision, and interview preparation.

## What this repo is for
- Learn core programming concepts with small examples
- Revise topics quickly before interviews or exams
- Build confidence by running and modifying code examples

## Suggested learning flow
1. Start with the roadmap in [LEARNING_ROADMAP.md](LEARNING_ROADMAP.md)
2. Use the topic template in [docs/TOPIC_TEMPLATE.md](docs/TOPIC_TEMPLATE.md)
3. Practice with the questions in [docs/PRACTICE_QUESTIONS.md](docs/PRACTICE_QUESTIONS.md)
4. Explore the language-specific notes in [CPP/README.md](CPP/README.md) and [Python/README.md](Python/README.md)

## Build this application using conan 2

#### First install conan in your linux development machine
> - sudo apt-get update
> - sudo apt install python3-pip
> - sudo pip install conan==2.11.0

#### Create default conan profile in your development machine
> - conan profile detect --name default

#### Following steps to compile code
> - conan install . --output-folder build
> - conan build . --output-folder build

#### Following step to Create Conan Package
> - conan create . --build=missing -u

#
# CPP
1.  [FunctionPointer](https://github.com/jignesh-kumar/LearningHub/tree/main/CPP/FunctionPointer/README.md)
2.  [InitializerList](https://github.com/jignesh-kumar/LearningHub/tree/main/CPP/InitializerList)
3.  [LocalClasses](https://github.com/jignesh-kumar/LearningHub/tree/main/CPP/LocalClasses)
4.  [Preventing Address Access of an Object in C++](https://github.com/jignesh-kumar/LearningHub/tree/main/CPP/Miscellaneous/PreventingAddressAccessOfAnObjectInCpp/README.md)
5.  [How to Check if Two Different Objects Belong to the Same Class in C++?](https://github.com/jignesh-kumar/LearningHub/tree/main/CPP/Miscellaneous/TypeId/README.md)
6.  [C++ Compilation Process](https://github.com/jignesh-kumar/LearningHub/tree/main/CPP/Miscellaneous/CppCompilation/CppCompilationProcess.md)<br>
    6.1. [Compilation Errors](https://github.com/jignesh-kumar/LearningHub/tree/main/CPP/Miscellaneous/CppCompilation/CompilationErrors.md)<br>
    6.2. [Debugging C++ Compilation Errors](https://github.com/jignesh-kumar/LearningHub/tree/main/CPP/Miscellaneous/CppCompilation/DebuggingCompilationErrors.md)<br>

# STL in CPP
1.  [STL EmplaceBack](https://github.com/jignesh-kumar/LearningHub/tree/main/CPP/STL/EmplaceBack/README.md)
