#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "DoublyLinkedList.h"

using namespace std;

<<<<<<< HEAD
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
=======
int main (int argc, char *argv[]) {

    cout << "Enter list type (i - int, f - float, s - std::string): ";
    char type;
    cin >> type;
    cout << endl;

    if (type == 'i') {
        DoublyLinkedList<int> list;
        int insert; // stores item to insert
        int deleteItem; // stores item to delete
        int lowerBound; // stores upper bound to delete
        int upperBound; // stores lower bound to delete
    } // if

    else if (type == 'f') {
        DoublyLinkedList<float> list;
        float insert;
        float deleteItem;
        float lowerBound;
        float upperBound;
    } // if

    else if (type == 's') {
        DoublyLinkedList<String> list;
        string insert;
        string deleteItem;
        string lowerBound;
        string upperBound;

    } // if

    else {
        cout << "Invalid command"; << endl;
        exit(0);
    } // else

    cout << "insert (i), delete (d), length (l), print (p), deleteSub (b), mode (m),
printReverse (r), swapAtl (s), quit (q)" << endl;

    while (true) {
        Cout << "Enter a command: ";
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
            cout << "The length is: " << list.LengthIs() << endl;
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
            cout << "Original List: " << list.print() << endl;
            list.deleteSubsection(lowerBound, upperBound);
            cout << "modified List: " << list.print() << endl;
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
            cout << "Original List: " << list.print() << endl;
            list.swapAlt();
            cout << "Swapped List: " << list.print() << endl;
            continue;
        } // if

        if (command == 'q') { // quit
            cout << "Quiting program..." << endl;
            break;
        } // if

        else {
            cout << "Invalid command" < endl;
            continue;
        } // else

} // main
>>>>>>> 677cf328aed71606e5c5d19185bb593e4443ffe5
