

int main() {
    // arrays are declared like this:
    // <type> <variablename>[<const size>];
    // <type> <variablename>[] = {<data>, <data2>};
    
    // arrays are zero indexed, so the first element is at index 0
    // arrays declared like those in this file may only ever have one size at runtime

    // makes an array of size 10
    int array[10];

    // what the array is filled with initially is undefined, so it is good practice to fill it with something before using it
    
    // this loops through the array and sets every value to 0
    for (int i = 0; i < 10; i++) {
        array[i] = 0;
    }

    // technically, the following will give you the size of a statically allocated array, but its hacky
    // dont do it
    int array_size = sizeof(array) / sizeof(int);

    // notice how there is no array.size() or len(array), the size must be stored separately from the array
    // this is best done with a const variable or a predefined macro (coming soon)

    const int size = 10;

    int array2[size]; // note how only constant values may go into the brackets

    for (int i = 0; i < size; i++) {
        array2[i] = 0;
    }

    // you can also declare tyhe array with value like such
    // in this case you may forgo putting a number in the brackets
    int array3[] = {1, 2, 3};


    //multidimensional arrays - just keep adding brackets

    int marray[10][10];

}