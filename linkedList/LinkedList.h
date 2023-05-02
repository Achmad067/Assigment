class Node{
	
	public:
		int		value; //data value
		Node 	*next; //pointer to the next node
		
		Node() { //constructor: a method that is called the first time
			next = NULL;
		}
};

class LinkedList {
	
	
	public:
		Node *head;
		Node *tail;
		
		void insertToHead(int);
		void insertToTail(int);
		void insertAfter(int,int); // (insert Node X, after Node B) insertAfter (X ,B)
		
		void deleteFromHead();
		void deleteFromTail();
		void deleteByValue(int);
		
		void printALL();
		
		LinkedList(){
			head = tail = NULL;
		}
};
