// This is where we include other modules/libraries
#include <iostream> // allows for writing to ouitput and taking input among other things
#include <string> // allows the use of the string class

int main() {
    // std::cout writes to standard out for the process (console by default)
    // std::endl is a newline that also flushed the stream
    // << in this case is an insertion operator which inserts "Hello world!" into standard out
    std::cout << "Hello world!" << std::endl;

    // you can insert anything into std::cout provided the operation is defined
    std::cout << 1.0;
    std::cout << 69;
    std::cout << '\n';

    // streams are interpretted from left to right so you can stack them
    std::cout << 1.0 << 69 << '\n'; // functionally the same code

    
    // input
    // you need to define your input variables before using them in an input stream
    int num;
    std::string my_str;
    std::string my_str2;
    // NOTE: you can also do
    // std::string my_str, my_str2;
    // which works for any type

    // std::string example = "hello"; // note the double quotes 


    std::cout << "Please type an integer: ";
    // >> is used as an extraction operator here
    // this operation is defined for most primitive types, which are all the types you know
    std::cin >> num;
    std::cout << "You entered the number " << num << std::endl;

    

    std::cout << "Please type a string: ";
    // when extracting into a string, it will parse until it hits whitespace (space, tab, newline)
    std::cin >> my_str;
    std::cout << my_str << std::endl;

    

    std::cout << "Please type 2 strings: ";
    // you can also stack std::cin
    std::cin >> my_str >> my_str2;
    std::cout << my_str << my_str2 << std::endl;

}