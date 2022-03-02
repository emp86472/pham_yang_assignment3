#include <sstream>
#include <iostream>
#include <fstream> //stin/out stuff
#include <string>

#include "DoublyLinkedList.h"

using namespace std;

int main(int argc, char *argv[]) {
    DoublyLinkedList<int> list;
    int n;
    for (int i = 0; i < 9; i++) {
        cin >> n;
        list.insertItem(n);
    } //for
    //cout << "Item to delete: ";
    //cin >> n;
    //list.deleteItem(n);
    list.print();
    list.deleteSubsection(20,36);
    list.print();
    //cout << list.lengthIs() << endl;
} //main
