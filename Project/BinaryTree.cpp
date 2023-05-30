#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insert(int InsertId){
	root = insertRecursive(root, InsertId);
}

Node *BinaryTree::insertRecursive(Node *currentRoot, int insertId){

	if(currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->id = insertId;
		return currentRoot;
		
	}
	
	
	if (insertId < currentRoot->id){
		currentRoot->left = insertRecursive(currentRoot->left, insertId); // left side of the root, or the left subtree, adn then bring the data
	}
	else if (insertId > currentRoot->id){
		currentRoot->right = insertRecursive(currentRoot->right, insertId);
	} 
	
	return currentRoot;
}

 void BinaryTree::preOrder(){
 	preOrderRecursive(root);
 }
 
 void BinaryTree::preOrderRecursive(Node *currentRoot){
 	if (currentRoot!=NULL){
 		cout << currentRoot->id << ", ";
 		preOrderRecursive(currentRoot->left);
 		preOrderRecursive(currentRoot->right);
	 }
 	
 }
 
 void BinaryTree::inOrder(){
 	inOrderRecursive(root);
 	
 }
 
 void BinaryTree::inOrderRecursive(Node *currentRoot){
 	if (currentRoot!=NULL){
 		inOrderRecursive(currentRoot->left);
 		cout << currentRoot->id << ", ";
 		inOrderRecursive(currentRoot->right);
 		
	 }
}

 void BinaryTree::postOrder(){
 	postOrderRecursive(root);
 	
}
 
 void BinaryTree::postOrderRecursive(Node *currentRoot){
 	if(currentRoot!=NULL){
 		postOrderRecursive(currentRoot->left);
 		postOrderRecursive(currentRoot->right);
 		cout << currentRoot->id << ", ";
	 }
 }
 
 Node *BinaryTree::searchValue(Node *node, int value){
 	while (node == NULL || node->id == value){
 		return node;
	 }
	 if (value > node->id){
	 	return searchValue(node->right, value);
	 }
	 else{
	 	return searchValue(node->left, value);
	 	
	 }
}

 Node *BinaryTree::search(int value){
 	Node *find = searchValue(root, value);
 	if (find != NULL){
 		cout << "Node " << value << " found in the tree."; 
	 }
	 else{
	 	cout << "Node " << value << " not found!";
	 }
  }	 

 
 Node *BinaryTree::findMin(){
 	Node *node = root;
 	while (node !=NULL && node->left !=NULL){
 		node = node->left;
	 }
	 if (node !=NULL){
	 	cout << "Min value of this node : " << node->id;
	 }
	 else{
	 	cout << "NULL";
	 }
 }
 
 Node *BinaryTree::findMax(){
 	Node *node = root;
	 while (node !=NULL && node->right !=NULL){
	 	node = node->right;
	 }	
	 if (node !=NULL){
	 	cout << "Max value of this node : " << node->id;
	 }
	 else{
	 	cout << "NULL";
	 }
}

 
  
 /*
 void BinaryTree::inOrderRecursive(Node *currentRoot){
 	if (currentRoot!=NULL){
 		inOrderRecursive(currentRoot->right);
		inOrderRecursive(currentRoot->left);
		cout << currentRoot->id << ", ";	
	 }	
 }
 */
 
