# CMake flow starts

# Conan downloads dependencies
conan install . -if build -pr:b clang13 -pr:b clang13

# CMake flow continue as usual
cmake \
  -S . \
  -B build \
  -DCMAKE_CC_COMPILER=/usr/bin/clang-13 \
  -DCMAKE_CXX_COMPILER=/usr/bin/clang++-13 \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake # Conan's deps

cmake --build build
cmake --install build --prefix build
