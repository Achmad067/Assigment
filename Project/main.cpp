#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main(int argc, char** argv){
	
	BinaryTree bin;
	
	bin.insert(10);
	bin.insert(5);
	bin.insert(7);
	bin.insert(15);
	bin.insert(20);
	bin.insert(17);
	bin.insert(25);
	
	bin.insert(30);
	
	//cout << bin.root->left->right->id << endl;
	
	//cout << bin.root->right->left->id << endl; 
	cout << "Pre-Order Traversal : ";
	bin.preOrder();
	cout << " " << endl;
	cout << "In-Order Traversal : ";
	bin.inOrder();
	cout << " " << endl;
	cout << "Post-Order Traversal : ";
	bin.postOrder();
	cout << " " << endl;
	cout << " " << endl;
	
	
	bin.findMin();
	cout << " " << endl;
	bin.findMax();	
	cout << " " << endl;
	cout << " " << endl;
	
	bin.search(17);
	//cin.get();
	
	return 0;
}