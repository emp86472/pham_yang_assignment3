#include "DoublyLinkedList.h"
#include <string>
#include <iostream>

using namespace std;

template<class T>
DoublyLinkedList<T>::DoublyLinkedList() {
    length = 0;
} //contructor

template<class T>
DoublyLinkedList<T>::~DoublyLinkedList() {

} //destructor

template<class T>
void DoublyLinkedList<T>::insertItem(T &item) {

} //insertItem

template<class T>
void DoublyLinkedList<T>::deleteItem(T &item) {

} //deleteItem

template<class T>
int DoublyLinkedList<T>::lengthIs() const {
    return length;
} //lengthIs

template<class T>
void DoublyLinkedList<T>::print() {

} //print

template<class T>
void DoublyLinkedList<T>::printReverse() {

} //printReverse

template<class T>
void DoublyLinkedList<T>::deleteSubsection(T lower, T upper) {

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
