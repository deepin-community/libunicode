[![C++20](https://img.shields.io/badge/standard-C%2B%2B%2020-blue.svg?logo=C%2B%2B)](https://isocpp.org/)
[![CI Build](https://github.com/contour-terminal/libunicode/workflows/Build/badge.svg)](https://github.com/contour-terminal/libunicode/actions?query=workflow%3ABuild)

# Modern C++20 Unicode Library

The goal of this library is to bring painless unicode support to C++ with simple and easy to understand APIs.

The API naming conventions are chosen to look familiar to those using the C++ standard libary.

### Feature Overview

- [x] API for accessing UCD properties
- [x] UTF8 <-> UTF32 conversion
- [x] wcwidth equivalent (`int unicode::width(char32_t)`)
- [x] grapheme segmentation (UTS algorithm)
- [x] symbol/emoji segmentation (UTS algorithm)
- [x] script segmentation [UTS 24](https://unicode.org/reports/tr24/)
- [x] unit tests for most parts (wcwidth / segmentation)
- [x] generic text run segmentation (top level segmentation API suitable for text shaping implementations)
- [ ] word segmentation (UTS algorithm)
- [x] CLI tool: `uc-inspect` for inspecting input files by code point properties, grapheme cluster, word, script, ...

# Unicode Technical Specifications

- [UTS 11](https://unicode.org/reports/tr11/) - character width
- [UTS 24](https://unicode.org/reports/tr24/) - script property
- [UTS 29](https://unicode.org/reports/tr29/) - text segmentation (grapheme cluster, word boundary)
- [UTS 51](https://unicode.org/reports/tr51/) - Emoji

### Integrate with your CMake project

```sh
git submodule add --name libunicode https://github.com/contour-terminal/libunicode 3rdparty/libunicode
```

```cmake
add_subdirectory(3rdparty/libunicode)

add_executable(your_tool your_tool.cpp)
target_link_libraries(your_tool PRIVATE unicode::unicode)
```

### Contributing

- for filing issues please visit: https://github.com/contour-terminal/libunicode/issues
- fork and create pull requests:  https://github.com/contour-terminal/libunicode/pulls
- I am also happy to just receive code reviews
- you can help with documentation, or
- general feedback is also very welcome

### Users of this library

* [Contour Terminal Emulator](https://github.com/contour-terminal/contour/)

### Disclaimer

This library is -in terms of features- by no means competive to the ICU library, but it attempts to
provide a clean and intuitive modern C++ API for those that do not want to fight legacy-style C APIs.

I hope that over time we can add more and more features to this library to conform to the Unicode
specification eventually at some point and I welcome everyone to contribute to it by forking the
library, creating pull requests, or even just constructive feedback.

### License

```
libunicode - a modern C++20 unicode library
-------------------------------------------

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
```
