compile:
	g++ -c -Wall -pedantic-errors DoublyLinkedList.cpp
	g++ -c -Wall -pedantic-errors main.cpp

link: compile
	g++ -o main main.o DoublyLinkedList.o

run: link
	./main

clean:
	rm -f main DoublyLinkedList.o main.o
