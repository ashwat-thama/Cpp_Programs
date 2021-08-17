#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

struct node *CreateNode(int num){
	struct node *new_node = new node();
	new_node->data = num;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

struct node *InsertNode(int num , struct node *root){
	if(root == NULL){
		return CreateNode(num);
	}
	
	else if(num > root->data){
		root->right = InsertNode(num , root->right);
	}
	
	else if(num < root->data){
		root->left = InsertNode(num , root->left);
	}
	
	return root;
}

void Inorder(struct node *root){
	if(root != NULL){
		Inorder(root->left);
		cout<<root->data<<" ";
		Inorder(root->right);
	}
}

void Search(struct node *root , int num){
	if(root == NULL){
		cout<<"NOT FOUND";
	}
	
	else if(num == root->data){
		cout<<"PRESENT IN THE TREE";
	}
	
	else if(num < root->data){
		Search(root->left , num);
	}
	
	else if(num > root->data){
		Search(root->right , num);
	}
	
	else{
		cout<<"NOT FOUND";
	}
}

int main(){
	struct node *root = NULL;
	root = InsertNode(5,root);
	InsertNode(4,root);
	InsertNode(6,root);
	Inorder(root);
	Search(root,7);
}
