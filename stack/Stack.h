class Node
{
public:
  int value;
  Node *next;
};

class Stack
{
public:
  Node *topNode;

  Stack();
  bool isEmpty();
  void push(int value);
  int pop();
  int top();
  void printElements();
};