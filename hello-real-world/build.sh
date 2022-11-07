clang++ -std=c++20 -c greet.cpp 
ar rsc libgreet.a greet.o
clang++ -std=c++20 -c main.cpp 
clang++ main.o -lgreet -L. -o hello
