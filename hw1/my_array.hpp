#pragma once //preprocessor directive to make sure this file only gets included once, helps reduce file size

/*
This a header file, it includes only the declarations of the class and its functions.
You will define the functions in a serparate file.
*/


// this class should store an array of integers and behave like a python list
class my_array {
private:
    //put member variables here

public:
    // the default constructor
    // should initialize the array as empty
    // should initialize any member variables you define
    my_array();

    // destructor
    // cleans up
    ~my_array();

    // returns the current size of the array
    int size();

    // allows the list to be accessed by the [] operator
    int& operator[](int); // <-- note how the parameter only has a type. this is fine as you will name the parameters in my_array.cpp

    // puts an element at the end of the array
    void append(int);

    // removes the element at the indexed position (the back of the list by default)
    int pop(int = -1); // this file is also where you declare default parameters

    // insert an element at a certain index
    void insert(int, int);

    // returns the number of a given element in the list
    int count(int);

    // reverses the list in place
    void reverse();
};