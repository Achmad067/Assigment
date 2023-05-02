#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
  Queue q;

  q.enqueue(3);
  q.enqueue(5);
  q.enqueue(2);
  q.enqueue(6);
  q.enqueue(7);

  q.printElements();

  cout << "Front Element : " << q.front() << endl;

  cout << "Dequeued Element : " << q.dequeue() << endl;

  q.printElements();

  return 0;
}