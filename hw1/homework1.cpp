#include "my_array.hpp"
#include <iostream>

/*
Your goal is to create a class that emulates python's built in list type.
You should also develop a test suite that convinces me that your class works.

This 'assignment' shouldn't be easy and should take a while.

I have overloaded the << operator so that you can simply do

    my_array arr;
    std::cout << arr << std::endl;
    
to print your array.
*/

std::ostream& operator<<(std::ostream& os, my_array& arr) {
    os << '{';
    if (arr.size() > 0) os << arr[0];
    for (int i = 1; i < arr.size(); i++) {
        os << ", " << arr[i];
    }
    os << '}';
    return os;
}

int main() {

    

    return 0;
}