all: main

main: main.o stringfunctions.o
	 g++ main.o stringfunctions.o -o main

main.o: main.cpp
	 g++ -c main.cpp

UnsortedFunctions.o: stringfunctions.cpp stringfunctions.hpp
	 g++ -c stringfunctions.cpp
clean : 
	 rm -rf *o main

