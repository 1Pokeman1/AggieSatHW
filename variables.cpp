

// This is the main function, it is what runs when the program is called and is required in every program
int main() {

    /*
    Variable declaration follows the form of:
        <type> <variablename>;
        <type> <variablename> = <value>;

    C++ is statically typed, so once a name has a type you can't change it like you could in python

    Later, once you see classes, you will also see declarations of the form:
        <type> <variablename>(<value>);

    The exact space a variable takes up is Operating System (OS) specific.
    Generally it is standardized, but it can differ so I'll try and not use numbers here.
    */

    // int holds integer values and is signed by default
    // you can't store infinitely sized integers in C++ because you only allocate so many bits to each variable
    // short is generally smaller than an int, whereas long is larger than int
    int my_int;
    short my_short;
    long my_long;

    // char is effectively an 8-bit (1 byte) integer and is used a lot in lower level code such as reading from or writing to a device
    // normally it is used for storing characters such as 'a' or '!'
    char my_char;

    // char values are assigned using single quotes '', double quotes are reserved for character arrays
    // my_char = 'a'; //is valid
    // my_char = "a"; //is not

    // the unsigned keyword can be applied to any of the above types and forces the variable to be >= 0
    // it also doubles the upper bound
    unsigned int my_uint;


    // float and double store floating point numbers
    // double is a float with twice the number of bits and is more accurate
    float my_float;
    double my_double;

    //NOTE: when typing a floating point number such as 1.0 it is automatically interpretted as a double unless you add an 'f' after it as in 1.0f
    //NOTE 2: you can do operations such as * and / between different numeric types, but it can lead to undefined behavior and should be avoided
    
    // bool stores a logic value of true or false
    bool my_bool; // = true or false

    /*
    Some keywords:
        const - variable is constant and cannot be changed
        unsigned - see above

    There are more than this, but its easier to see them in use so we'll see them later.
    */
    
    //How the main function returns informs the OS how the process went, anything other than 0 is interpreted as an error.
    return 0;

}