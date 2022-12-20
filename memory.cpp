#include <iostream>

using std::cout, std::cin, std::endl;

/*
Welcome to the heart and soul of C++, the part that most people struggle with

Pointers:
    a pointer stores the address that a data type is located at and is denoted by <type>* <variablename>
    an address is just an integer value

New Operators:
    &<variable> - reference - get the memory address of <variable>
    *<variable> - dereference - access the data stored at the address stored in <variable>
    new <type> - allocate memory on the heap for <type> and return the address
    delete <variable> - deallocate the memory stored at the address stored in variable
    delete[] <variable> - same as above, but for arrays
*/

// see definition below after reading all of main
int nth_fibonacci(int);

int main() {
    // initializes a pointer to an int
    int *address;

    // when initially declared, the pointer doesn't point to anything
    // the OS doesn't have to initialize it to nullptr, so it is good practice to do so
    address = nullptr;

    // just an int
    int number = 420;

    // you can give a pointer the address of a pre-existing variable  
    address = &number;
    // address now stores the memory address that stores number

    // if you dereference a pointer, you can access the data it points to
    cout << *address << endl;
    // should print 420

    //you can also use dereferencing to modify the data
    *address += 10;

    // remember that address is the memory address that stores number, so modifying the data pointed to by address modifies number
    cout << number << endl;
    // should print 430


    // but you don't have to just work with pre-existing variables
    int *address2 = new int(69);
    // this allocates a new pointer called address2 with the address of an int on the heap with value 69

    cout << address2 << " stores " << *address2 << endl;

    // memory allocated with `new` must be deleted by you, otherwise the memory is never freed and you create a memory leak
    delete address2;

    // address2 still contains an address at this point but it now points to invalid memory
    // this is called a dangling pointer
    // good practice says to set it to nullptr, but it doesn't matter that much
    address2 = nullptr;

    // storing a single number is boring
    // the real fun here comes when you realize you can now dynamically allocate arrays
    // previously, you have been restricted to arrays witha predefined size
    // now you can do
    int size;
    cout << "Give me a positive integer: ";
    cin >> size;

    int *array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }

    cout << "Created an array of size " << size << endl;

    // array points to an array, use delete[]
    delete[] array;

    int n;
    cout << "Give me a positive integer: ";
    cin >> n;
    cout << "The " << n << "th fibonacci number is " << nth_fibonacci(n) << endl;

    // being able to dynamically allocate memory is useful for operations involving files, math, devices, etc.
    // otherwise known as most things

}

// returns the nth fibonacci number
// 0-indexed
// https://oeis.org/A000045
// there are better ways to do this, this is just an example
int nth_fibonacci(int n) {
    // base case, no point in doing math
    if (n < 2) return 1;

    // create array to store calculations
    int *array = new int[n + 1];
    
    // manually set the first two fibonacci numbers
    array[0] = 1;
    array[1] = 1;

    // generate the fibonacci sequence through n
    for (int i = 2; i < n + 1; i++) {
        // use the array to store results as we go so we don't have to recompute them
        array[i] = array[i-1] + array[i-2];
    }

    // store the result so we can delete the array
    int result = array[n];

    delete[] array;

    // return the nth element of the array
    return result;
}