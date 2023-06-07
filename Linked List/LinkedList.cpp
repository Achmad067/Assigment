#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if (tail==NULL)
		tail = head;
		
}

void LinkedList::printALL(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout << endl;
}
