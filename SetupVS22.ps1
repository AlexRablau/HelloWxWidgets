# Setup Visual Studio 2022 Project

# Remove existing build folder
if (Test-Path -Path "./build") {
  Remove-Item "./build" -Recurse -Force
}

# Make build folder
mkdir build

# Run CMake
cmake `
-D CMAKE_TOOLCHAIN_FILE="$env:VCPKG_ROOT/scripts/buildsystems/vcpkg.cmake" `
-B build `
-A x64 `
-G "Visual Studio 17 2022" `
-S .