#pragma once

/*

A linked list is made up of nodes that point to the next node:

    1 -> 2 -> 3 -> 4 -> nullptr

When a node points to the nullptr, that means you are at the end of the list.
TIP: nullptr evaluates to false

Adding new elements to the list is as simple as creating a new node and adjusting the list to point to it:

    insert(2, 5)

    1 -> 2       3 -> 4 -> nullptr
           \   /
             5

The class itself only stores a pointer to the first node in the list and (optionally) the last node in the list.

Each node stores its value, a pointer to the next node in the list, and (optionally) a pointer to the previous node in the list.
                                                                                      ^ This is called a doubly-linked list

I have not provided an overloaded operator<< for this class as your implementation may differ wildly from my own.
You are encouraged to write your own. The operator<< from hw1 will also suffice, but will be drastically inefficient for this class.

WARNING: This hw is a trial by fire in memory management. Be careful with new and delete.

As always, message me with any questions.

*/

template<typename T>
class LinkedList {
private:
    struct Node {

    };

public:
    LinkedList();
    ~LinkedList();
    int size();
    T& operator[](int);
    void append(T);
    T pop(int = -1);
    void insert(int, T);
    int count(T);
    void reverse();
};