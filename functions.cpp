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

int main() {
    int a = 1, b = 3;
    int c = add(a, b); //note: the variables don't need to be called the same thing as the function definition
    print_num(a);
    print_num(b);
    print_num(c);
}

// this is the definition for `add`
int add(int a, int b) {
    return a + b;
}