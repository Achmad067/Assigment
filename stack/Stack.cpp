#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack()
{
  topNode = NULL;
}

bool Stack::isEmpty()
{
  return topNode == NULL;
}

void Stack::push(int value)
{
  Node *newNode = new Node();
  newNode->value = value;
  newNode->next = topNode;
  topNode = newNode;
}

int Stack::pop()
{
  if (isEmpty())
  {
    return -1;
  }

  Node *temp = topNode;
  int value = temp->value;
  topNode = topNode->next;
  delete temp;
  return value;
}

int Stack::top()
{
  if (isEmpty())
  {
    return -1;
  }

  return topNode->value;
}

void Stack::printElements()
{
  if (isEmpty())
  {
    cout << "Stack is Empty" << endl;
  }

  cout << "Stack Element : ";
  Node *temp = topNode;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }

  cout << endl;
}