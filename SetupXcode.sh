#!/bin/bash

# Remove existing build folder
rm -r build

# Make build folder
mkdir build

# Run CMake
cmake \
-D CMAKE_TOOLCHAIN_FILE="$VCPKG_ROOT/scripts/buildsystems/vcpkg.cmake" \
-B build \
-G "Xcode" \
-S .