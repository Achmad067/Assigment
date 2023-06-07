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

void LinkedList::insertToTail(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	newNode->next = NULL;
	
	if (head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
		tail->next = newNode;
		tail = newNode;
	}
}

void LinkedList::insertAfter(int node, int input){
	Node *newNode = new Node();
	newNode->value = input;
	
	Node *tmp = head;
	Node *nodeTmp = NULL;
	int pos = 1;
	while (tmp != NULL){
		if (pos == node)
		{
			nodeTmp = tmp;
			break;
		}
		
		tmp = tmp->next;
		
		pos++; 
	}
	
	if (nodeTmp != NULL){
		newNode->next = nodeTmp->next;
		nodeTmp->next = newNode;
	}
	else{
		cout << "error!" << endl;
	}
}

void LinkedList::deleteFromHead(){
	if (head == NULL){
		cout << "linkedList Empty." << endl;
		return;
	}
	Node *tmp = head;
	head = head->next;
	delete tmp;
	if (head == NULL){
		tail = NULL;
	}
}

void LinkedList::deleteFromTail(){
	if (head == NULL){
		cout << "linkedList Empty." << endl;
		return;
	}
	if (head == tail){
		delete head;
		head = NULL;
		tail = NULL;
		return;
	}
	
	Node *tmp = head;
	while (tmp->next != tail){
		tmp = tmp->next;
	}
	delete tail;
	tail = tmp;
	tail->next = NULL;
}

void LinkedList::deleteByValue(int value){
	if (head == NULL)
  {
    cout << "Linked list is empty!" << endl;
    return;
  }
  if (head->value == value)
  {
    deleteFromHead();
    return;
  }
  if (tail->value == value)
  {
    deleteFromTail();
    return;
  }
  Node *tmp = head;
  while (tmp->next != NULL && tmp->next->value != value)
  {
    tmp = tmp->next;
  }
  if (tmp->next == NULL)
  {
    cout << "Node not found!" << endl;
    return;
  }
  Node *nodeToDelete = tmp->next;
  tmp->next = nodeToDelete->next;
  delete nodeToDelete;
}
void LinkedList::printALL(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout << endl;
}
