#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template<class T>
struct NodeType {

public:
    T data;
    NodeType<T> *next;
    NodeType<T> *back;
};

template<class T>
class DoublyLinkedList {

private:
    NodeType<T> *head;
    int length;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    void insertItem(T &item);
    void deleteItem(T &item);
    int lengthIs() const;
    void print();
    void printReverse();
    void deleteSubsection(T lower, T upper);
    void mode();
    void swapAlt();
};

#endif
