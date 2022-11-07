@REM CMake flow starts

@REM Conan downloads dependencies
conan install . -if build 

@REM CMake flow continue as usual
cmake -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake 

cmake --build build --config Release
cmake --install build --prefix build