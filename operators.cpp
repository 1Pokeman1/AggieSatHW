

int main() {
    /*
    I'm assuming you know basic math (+, -, *, /)
    
    C++ does not have a power operator, should you need an exponent you'll need to use the pow() function from <cmath>/<math.h>

    So here are some other operators that you may find useful
    */

    // post/pre inc/dec rement
    int a = 0;
    a++; // returns a, then adds 1
    ++a; // adds 1 then returns a
    a--; // returns a, then subtracts 1
    --a; // subtracts 1, then returns a



    // boolean operators
    // modern C++ has the and, or, not keywords. these are fairly recent additions
    // you will also see && (and), || (or), ! (not) 



    // bitwise operators

    // bitwise and - &
    // applies the `and` operation to every bit in a variable
    // say we have 2 and 1 which have binary interpretations of 10 and 01 respectively 
    // 10 & 01 = 00 which is 0
    // 01 & 01 = 01 which is 1

    // bitwise or - |
    // applies the `or` operation to every bit
    // 10 | 01 = 11 which is 3
    // 01 | 01 = 01 which is 1

    // bitwise not - ~
    // inverts every bit 
    // ~10 = 01
    // ~00 = 11

    // bitwise exclusive or (XOR) - ^
    // XOR is defined as: (a or b) and (not (a and b))
    // in english, the output is true when only one of the inputs is true
    // NOTE: there is no boolean XOR operator
    // 10 ^ 01 = 11
    // 01 ^ 01 = 00

    // bitshift operators - <<, >>
    // these operators shift the bits of an object howver many places you tell it padding with 0's as it goes
    // 10 >> 1 = 01
    // 10 << 1 = 100
    // 10 << 3 = 10000
    // 10 >> 2 = 0
    // NOTE: you can also think of this as multiplying (<<) or dividing (>>) by 2 to the power of n
    // NOTE 2: these also double as stream operators which you'll see soon



    // += and its friends
    // almost every operator in C++ has a variant like +=
    // &=, ^=, >>= are all valid

}