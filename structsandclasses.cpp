#include <iostream>

using std::cout, std::endl;

/*
structs and classes provide you with more control over data

IMO structs should be used for simple data structures and classes should be used for more complex tasks

struct definition:

struct <typename> {
    <type> <membername>;
    <type> <membername>;
    ...
} <variables>;

technically both <typename and variables are optional but you really need at least one.
my recommendation is to just do the typename and declare the variable later.

class definitions are basically identical

class <typename> {
    <type> <membername>;
    <type> <membername>;
    ...
} <variablename>;


*/

// a struct like this would allow tyou to pass the array and its size around as one variable
struct better_array {
    int size;
    int* data;
}; // <-- note this semicolon is required

// a struct is a holdover from C which is why it may seem kind of basic
// a class is C++'s improvement on struct which allows the class to have functions directly associated with it

class even_better_array {
private:
    // private means that you cannot access the directly outside the class
    int size;
    int* data;

public:
    // these can be accessed directly in the class

    // default constructor
    // one of the big five
    // a function with no return type, no arguments, and same name as class
    even_better_array() {
        size = 0;
        data = nullptr;
    }

    // constructor
    // a constructor that allows the user to create an array of a certain size
    even_better_array(int n) {
        size = n;
        data = new int[n];
        for (int i = 0; i < n; i++) data[i] = 0;
    }

    // destructor
    // one of the big five
    // is called automatically when the object leaves memory
    // frees any dynamically allocated memory, closes connections, ensures the object can be deleted with no fuss
    // denoted by the ~, no arguments, and same name as class
    ~even_better_array() {
        if (data != nullptr) delete[] data;
    }

    // allows the [] operator to access the data stored in the array
    // this is called operator overloading
    // V this & means that it is returning a reference to that exact point in the array, allowing the program to access the array directly through this function
    int& operator[](int n) {
        return data[n];
    }

    int get_size() {return size;}
} temp;

// NOTE: since class is built on top of struct, you can also create constructors, member functions, and the like for structs
// but if your struct needs some complicated function or constructor/destructor, then it should probably be a class

int main() {
    better_array arr;
    arr.data = new int[20];
    arr.size = 20;

    for (int i = 0; i < arr.size; i++) {
        arr.data[i] = i;
    }

    // a better declaration would be
    better_array arr2 = {20, new int[20]};
    // note the order of the arguments is the same as the definition in the class

    for (int i = 0; i < arr2.size; i++) {
        arr2.data[i] = i;
    }

    delete[] arr.data;
    delete[] arr2.data;

    even_better_array arr3(20);
    // no need to call delete for this as the destructor handles it

    for (int i = 0; i < arr3.get_size(); i++) {
        arr3[i] = i;
    }

    for (int i = 0; i < arr3.get_size(); i++) {
        cout << arr3[i] << endl;
    }

}