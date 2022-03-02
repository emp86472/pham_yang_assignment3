#include <sstream>
#include <iostream>
#include <fstream> //stin/out stuff

#include "DoublyLinkedList.h"

using namespace std;

int main(int argc, char *argv[]) {
    DoublyLinkedList<string> stringList;
    cout << stringList.lengthIs() << endl;
} //main
