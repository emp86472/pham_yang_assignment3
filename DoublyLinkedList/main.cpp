#include <sstream>
#include <iostream>
#include <fstream> //stin/out stuff
#include <string>

#include "DoublyLinkedList.h"

using namespace std;

int main(int argc, char *argv[]) {
    DoublyLinkedList<string> list;
    cout << list.lengthIs() << endl;
    string n;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        list.insertItem(n);
    } //for

    list.print();
    cout << list.lengthIs() << endl;
} //main
