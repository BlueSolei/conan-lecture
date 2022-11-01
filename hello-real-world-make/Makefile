TARGET = hello

$(TARGET): main.o libgreet.a 
	clang++ $^ -o $@

main.o: main.cpp
	clang++ -std=c++20 -c $< -o $@

libgreet.a: greet.o 
	ar rcs $@ $^

greet.o: greet.cpp greet.h
	clang++ -std=c++20 -c -o $@ $<

clean:
	git clean -f

