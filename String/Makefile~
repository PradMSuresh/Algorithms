all: main

main: main.o UnsortedFunctions.o
	 g++ main.o linkedlist.o -o main

main.o: main.cpp
	 g++ -c main.cpp

UnsortedFunctions.o: linkedlist.cpp linkedlist.hpp
	 g++ -c linkedlist.cpp
clean : 
	 rm -rf *o main

