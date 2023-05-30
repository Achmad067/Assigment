#include <iostream>
#include <string>

using namespace std;

class Node {
	public:
		int 	id;
		string name;
		Node 	*left;
		Node 	*right;
		
		node(){
			left = right = NULL;
		}
	
};

class BinaryTree{
	
	public: // anyone can access, default is private
		Node *root;
		
		void insert(int);
		Node *insertRecursive(Node*, int);
		
		void deleteNode(int);
		
		void preOrder();
		void preOrderRecursive(Node* currentRoot);
		
		void inOrder();
		void inOrderRecursive(Node* currentRoot);
				
		void postOrder(int);
		void postOrder();
		void postOrderRecursive(Node* currentRoot);
		
		Node *searchValue(Node*, int value);
		Node *search(int);
		
		Node *findMin();
		Node *findMax();
		
		BinaryTree(){
			root = NULL; // default value of the root
		}
};

// root = starting point 