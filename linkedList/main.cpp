#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(int argc, char** argv) {
/*	
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(50);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	// cout << list1.head->next->next->value << endl;
	
	list1.printALL();
	
	LinkedList list2;
	list2.insertToHead(24);
	list2.insertToHead(30);
	
	list2.printALL();
*/
	LinkedList linkList;
	
	linkList.insertToHead(10);
	linkList.insertToHead(20);
	linkList.insertToHead(30);
	linkList.insertToHead(50);
	linkList.insertAfter(1, 15);
	linkList.insertAfter(2, 35);
	
	cout << "linked List : ";
	linkList.printALL();
	
	cout << "head : " << linkList.head->value << endl;
	cout << "tail : " << linkList.tail->value << endl;
	cout << "---------------------------------------\n" << endl;
	
	cout << "Delete From Head\n";
	cout << "linked List : ";
	linkList.deleteFromHead();
	linkList.printALL();
	cout << "head : " << linkList.head->value << endl;
	cout << "tail : " << linkList.tail->value << endl;
	cout << "---------------------------------------\n" << endl;
	
	cout << "Delete From Tail\n";
	cout << "linked List : ";
	linkList.deleteFromTail();
	linkList.printALL();
	cout << "head : " << linkList.head->value << endl;
	cout << "tail : " << linkList.tail->value << endl;
	cout << "---------------------------------------\n" << endl;
	 
	cout << "delete by value\n"; 
	cout << "linked List : ";
	linkList.deleteByValue(30);
	linkList.printALL();
	cout << "head : " << linkList.head->value << endl;
	cout << "tail : " << linkList.tail->value << endl;
	
	//cin.get();
	return 0;
}