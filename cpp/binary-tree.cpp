#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};
node *root = NULL;

struct node* CreatNode(int data){
	node *new_node = new node;
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

struct node* InsertNode(struct node *root , int data){
	if(root == NULL){
		return CreatNode(data);
	}
	
	else if(data > root->data){
		root->right = InsertNode(root->right , data);
	}
	
	else if(data < root->data){
		root->left = InsertNode(root->left , data);
	}
	
	return root;
}

int main(){
	root = InsertNode(root , 3);
}
