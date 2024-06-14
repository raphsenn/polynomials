.PHONY: all compile checkstyle test clean

compile:
	clang++ -c polynomial.cpp
	clang++ -std=c++17 -c test_polynomial.cpp
	clang++ -c demo.cpp
	clang++ -o main demo.o polynomial.o
	clang++ -o test test_polynomial.o polynomial.o -lgtest -lgtest_main

run:
	./main

test:
	./test

clean:
	rm -f *.o
	rm -f main
	rm -f test