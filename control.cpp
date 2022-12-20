

int main() {

    // if and while should look the same to you
    // the parentheses are required
    // if the internal code is only one line, then the curly braces are not required

    if (1 > 0) {
        //code
    }

    int i = 0;
    while (i < 10) {
        //code
        i++;
    }


    // for (<variable declaration>; <loop condition>; <variable updater>)
    for (int j = 0; j < 10; j++) {

    }

    // technically all of those parameters are optional
    // for instance a loop may use a variable thats already been declared 
    for (; i > 0; i--) {

    }

    // or forgoing the condition makes an infinite loop
    /*
    for (int j = 0;; j++) {

    }

    more commonly written as

    for (;;) {

    }
    */
}