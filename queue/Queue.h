class Node
{
public:
  int value;
  Node *next;
};

class Queue
{
public:
  Node *frontNode;
  Node *rearNode;

  Queue();
  bool isEmpty();
  void enqueue(int value);
  int dequeue();
  int front();
  void printElements();
};