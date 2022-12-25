#include <iostream>

// using allows me to forgo typing the std:: in front of the imported functions
using std::cout, std::endl;

/*
Functions look like:
<return type> <function name>(<arguments>) {
    <code>
}

Functions must be declared before you can use them
*/

// this is a function declaration, it allows me to call the function without defining it
// it must still be defined somewhere in the code
int add(int, int);

// the `void` type means that the function won't return anything
void print_num(int num) {
    cout << num << endl;
}

// the & after the parameter type tells the function to literally use the same variable that was passed in without making a copy
// known as pass by reference
void add_one(int& num) {
    num += 1;
}

// const tells the compiler that the function has no intention of changing the variable which can help both the programmer and compiler write better code
void cprint_num(const int num) {
    cout << num << endl;
}

int main() {
    int a = 1, b = 3;
    int c = add(a, b); //note: the variables don't need to be called the same thing as the function definition
    print_num(a);
    print_num(b);
    print_num(c);

    // adds one to c b/c c is passed as a reference
    add_one(c);
    // const b/c c is not being changed inside the function
    cprint_num(c);
}

// this is the definition for `add`
int add(int a, int b) {
    return a + b;
}