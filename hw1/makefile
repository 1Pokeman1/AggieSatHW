CXX := g++
CXXFLAGS := -Wall -Wextra -pedantic -std=c++17



main: homework1.cpp my_array.hpp my_array.o
	$(CXX) $(CXXFLAGS) homework1.cpp my_array.o -o main

# compiles the array class into an object file so that it can be more easily included in main
my_array.o: my_array.cpp my_array.hpp
	$(CXX) $(CXXFLAGS) -c my_array.cpp

# run `make clean` to remove the program files
clean:
	rm main
	rm my_array.o