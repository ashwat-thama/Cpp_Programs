#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

struct node *CreateNode(int num){
	node *new_node = new node();
	new_node->data = num;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

struct node *InsertNode(int num , struct node *root){
	if(root == NULL){
		return CreateNode(num);
	}
	
	else if(root->data > num){
		root->left = InsertNode(num , root->left);
	}
	
	else if(root->data < num){
		root->right = InsertNode(num , root->right);
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

struct node *MinNode(struct node *root){
	while(root->left != NULL){
		root = root->left;
	}
	return root;
}

struct node *DeleteNode(int num , struct node *root){
	if(root == NULL){
		return root;
	}
	
	else if(root->data > num){
		root->left = DeleteNode(num , root->left);
	}
	
	else if(root->data < num){
		root->right =  DeleteNode(num , root->right);
	}
	
	else{
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
			return root;
		}
		
		else if(root->left == NULL){
			node *temp = root;
			root = root->right;
			delete(temp);
			return root;
		}
		
		else if(root->right == NULL){
			node *temp = root;
			root = root->left;
			delete(temp);
			return root;
		}
		
		else{
				node *temp = MinNode(root->right);
				root->data = temp->data;
				DeleteNode(temp->data , root->right);
		}
	}
	return root;
}

int main(){
	node *root = NULL;
	root = InsertNode(20,root);
	InsertNode(15 , root);
	InsertNode(25 , root);
	InsertNode(18 , root);
	InsertNode(10 , root);
	InsertNode(16 , root);
	InsertNode(19 , root);
	InsertNode(17 , root);
	cout<<"\n"<<root<<"\n";
	Inorder(root);
	DeleteNode(17 , root);
	cout<<"\n";
	Inorder(root);  
	cout<<"\n"<<root<<"\n";                                                                              
}
