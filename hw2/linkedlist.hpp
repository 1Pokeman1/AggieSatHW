#pragma once

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