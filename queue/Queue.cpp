#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue()
{
  frontNode = NULL;
  rearNode = NULL;
};

bool Queue::isEmpty()
{
  return frontNode == NULL;
}

void Queue::enqueue(int value)
{
  Node *newNode = new Node();
  newNode->value = value;
  newNode->next = NULL;

  if (isEmpty())
  {
    frontNode = newNode;
    rearNode = newNode;
  }
  else
  {
    rearNode->next = newNode;
    rearNode = newNode;
  }
}

int Queue::dequeue()
{
  if (isEmpty())
  {
    return -1;
  }

  Node *temp = frontNode;
  int value = temp->value;

  if (frontNode == rearNode)
  {
    frontNode = NULL;
    rearNode = NULL;
  }
  else
  {
    frontNode = frontNode->next;
  }

  delete temp;
  return value;
}

int Queue::front()
{
  if (isEmpty())
  {
    return -1;
  }

  return frontNode->value;
}

void Queue::printElements()
{
  if (isEmpty())
  {
    cout << "Queue is empty" << endl;
  }

  cout << "Queue Elements : ";
  Node *temp = frontNode;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}