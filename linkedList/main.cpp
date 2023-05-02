#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(int argc, char** argv) {
	
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(50);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	cout << list1.head->next->next->value << endl;
	
	list1.printALL();
	
	LinkedList list2;
	list2.insertToHead(24);
	list2.insertToHead(30);
	
	list2.printALL();
	
	return 0;
}