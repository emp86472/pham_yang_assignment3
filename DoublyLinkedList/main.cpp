#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include "DoublyLinkedList.h"

using namespace std;

template<typename T>
void run(int argc, char *argv[]) {

    ifstream file;
    file.open(argv[1]); // file with list
    setbuf(stdout, NULL);

    if (!file.is_open()) { // checks if file is open
        cout << "Error: cannot parse information from ";
        cout << argv[1] << endl;
        exit(0);
    } // if

    T nums;
    DoublyLinkedList<T> list;
    while (file >> nums) {
        list.insertItem(nums);
    } // while

    file.close();

    cout << "insert (i), delete (d), length (l), print (p), deleteSub (b), mode (m), printReverse (r), swapAtl (s), quit (q)" << endl;

    T insert;
    T deleteItem;
    T upperBound;
    T lowerBound;

    while (true) {
        cout << "Enter a command: ";
        char command;
        cin >> command;
        cout << endl;

        if (command == 'i') { // insert
            cout << "Item to insert: ";
            cin >> insert;
            cout << endl;
            list.insertItem(insert);
            list.print();
            continue;
        } // if

        if (command == 'd') { // delete
            cout << "Item to delete: ";
            cin >> deleteItem;
            cout << endl;
            list.deleteItem(deleteItem);
            list.print();
            continue;
        } // if

        if (command == 'l') { // length
            cout << "The length is: " << list.lengthIs() << endl;
            continue;
        } // if

        if (command == 'p') { // print
            list.print();
            continue;
        } // if

        if (command == 'b') { // deleteSub
            cout << "Enter lower bound: ";
            cin >> lowerBound;
            cout << endl;
            cout << "Enter upper bound: ";
            cin >> upperBound;
            cout << endl;
            cout << "Original List: ";
            list.print();
            cout << endl;
            list.deleteSubsection(lowerBound, upperBound);
            cout << "modified List: ";
            list.print();
            cout << endl;
            continue;
        } // if

        if (command == 'm') { // mode
            list.print();
            cout << "Mode: " << list.mode() << endl;
            continue;
        } // if

        if (command == 'r') { // printReverse
            list.printReverse();
            continue;
        } // if

        if (command == 's') { // swapAlt
            cout << "Original List: ";
            list.print();
            cout << endl;
            list.swapAlt();
            cout << "Swapped List: ";
            list.print();
            cout << endl;
            continue;
        } // if

        if (command == 'q') { // quit
            cout << "Quiting program..." << endl;
            break;
        } // if

        else {
            cout << "Invalid command" << endl;
            continue;
        } // else
    } // while
} // run



int main (int argc, char *argv[]) {

    cout << "Enter list type (i - int, f - float, s - std::string): ";
    char type;
    cin >> type;
    cout << endl;

    if (type == 'i') {
        run<int>(argc, argv);
    } // if

    else if (type == 'f') {
        run<float>(argc, argv);
    } // if

    else if (type == 's') {
        run<string>(argc, argv);
    } // if

    else {
        cout << "Invalid command" << endl;
        exit(0);
    } // else

} // main

// specify types of data that we plan to support
//template typename run<int>;
//template typename run<float>;
//template typename run<string>;
