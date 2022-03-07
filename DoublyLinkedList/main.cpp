#include <sstream>
#include <iostream>
#include <fstream> //stin/out stuff
#include <string>

#include "DoublyLinkedList.h"

using namespace std;

int main(int argc, char *argv[]) {
    //setbuf(stdout, NULL);
    DoublyLinkedList<int> list;
    int n;
    for (int i = 0; i < 9; i++) {
        cin >> n;
        list.insertItem(n);
    } //for
    //cout << "Item to delete: ";
    //cin >> n;
    //list.deleteItem(n);
    list.swapAlt();
    cout << "after swap" << endl;
    list.print();
    //return 0;
    cout << "after print" << endl;
    //list.printReverse();
    //cout << list.mode() << endl;
    //list.print();
} //main
