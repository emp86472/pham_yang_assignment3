#include "DoublyLinkedList.h"
#include <string>
#include <iostream>

using namespace std;

template<class T>
DoublyLinkedList<T>::DoublyLinkedList() {
    head = NULL;
    length = 0;
} //contructor

template<class T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    while (head != NULL) {
        NodeType<T> *temp;
        temp = head;
        head = head->next;
        delete temp;
    } //while
} //destructor

template<class T>
void DoublyLinkedList<T>::insertItem(T item) {
    NodeType<T> *node = new NodeType<T>;
    node->data = item;
    node->next = NULL;
    node->back = NULL;
    if (length == 0) {
        head = node;
        length++;
    } else {
        NodeType<T> *temp = head;
        NodeType<T> *pretemp = NULL;
        bool b = true; //first iteration
        while (temp != NULL) {
            if (temp->data < item) { //keep going
                pretemp = temp;
                temp = temp->next;
            } else if (temp->data >= item) { //place it
                node->next = temp;
                if (!b) { //if not first iteration
                    pretemp->next = node;
                    node->back = pretemp;
                } else { //head case
                    head = node;
                } //if
                length++;
                break;
            } //if
            //need to handle head/tail cases
        } //while
        b = false;
        if (temp == NULL) {
            pretemp->next = node;
            node->back = pretemp;
            length++;
        } //if
    } //if

} //insertItem

template<class T>
void DoublyLinkedList<T>::deleteItem(T item) {
    NodeType<T> *temp = head;
    NodeType<T> *pretemp = NULL;
    if (head == NULL) {
        cout << "You cannot delete from an empty list" << endl;
        return;
    } //if
    while (temp != NULL) {
        if (temp->data == item) {
            if (pretemp == NULL) { //if first iteration
                head = temp->next;
                head->back = NULL;
            } else if (temp->next != NULL) { //not last node
                pretemp->next = temp->next;
                temp->next->back = pretemp;
            } else if (temp->next == NULL) { //last node
                pretemp->next = NULL;
            } //if
            delete temp;
            length--;
            return;
        } //if
        pretemp = temp;
        temp = temp->next;
    } //while
    cout << "Item not in list!" << endl;
} //deleteItem

template<class T>
int DoublyLinkedList<T>::lengthIs() const {
    return length;
} //lengthIs

template<class T>
void DoublyLinkedList<T>::print() {
    NodeType<T> *temp = head;
    while (temp != NULL) {
        cout << temp->data;
        cout << " ";
        temp = temp->next;
    } //while
    cout << endl;
} //print

//this function depends on the other functions
//to keep the data structure the same
template<class T>
void DoublyLinkedList<T>::printReverse() {
    NodeType<T> *temp = head;
    while (temp->next != NULL) {//place temp at the end
        temp = temp->next;
    } //while
    while (temp != NULL) {
        cout << temp->data;
        cout << " ";
        temp = temp->back;
    } //while
    cout << endl;
} //printReverse

template<class T>
void DoublyLinkedList<T>::deleteSubsection(T lower, T upper) {
    NodeType<T> *temp = head;
    NodeType<T> *pretemp = NULL;
    if (head == NULL) {
        return; //does nothing, not even print
    } //if
    while (temp->data < lower) {
        pretemp = temp;
        temp = temp->next;
    } //while
    while (temp->data <= upper) {
        NodeType<T> *temp2;
        temp2 = temp;
        temp = temp->next;
        delete temp2;
    } //while
    pretemp->next = temp;
} //deleteSubsection

template<class T>
void DoublyLinkedList<T>::mode() {
    //returns void for now for compile reasons but should return T
} //mode

template<class T>
void DoublyLinkedList<T>::swapAlt() {

} //swapAlt

//specify types of data that we plan to support
template class DoublyLinkedList<int>;
template class DoublyLinkedList<float>;
template class DoublyLinkedList<string>;
