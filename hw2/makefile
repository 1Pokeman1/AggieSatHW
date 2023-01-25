CXX := g++
CXXFLAGS := -Wall -Wextra -pedantic -std=c++17



main: homework2.cpp linkedlist.hpp linkedlist.o
	$(CXX) $(CXXFLAGS) homework2.cpp linkedlist.o -o main

# compiles the LinkedList class into an object file so that it can be more easily included in main
linkedlist.o: linkedlist.cpp linkedlist.hpp
	$(CXX) $(CXXFLAGS) -c linkedlist.cpp

# run `make clean` to remove the program files
clean:
	rm main
	rm linkedlist.o