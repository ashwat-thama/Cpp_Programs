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
};

struct node *InsertNode(struct node *root , int num){
	if(root == NULL){
		return CreateNode(num);
	}
	
	else if(num < root->data){
		root->left = InsertNode(root->left , num);
	}
	
	else if(num > root->data){
		root->right = InsertNode(root->right , num);
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
	while(root->left == NULL){
		root = root->left;
	}
	return root;
};

void SearchNode(struct node *root , int num){
	if(root == NULL){
		cout<<"\nTHE TREE IS EMPTY";
	}
	
	else if(root->data == num){
		cout<<"\nTHE NUMBER IS FOUND AT "<<root;
	}
	
	else if(root->data < num){
		SearchNode(root->right , num);
	}
	
	else if(root->data > num){
		SearchNode(root->left , num);
	}
}

struct node *DeleteNode(struct node *root , int num){
	if(root == NULL){
		cout<<"\nEMPTY TREE";
	}
	
	else if(root->data < num){
		root->right = DeleteNode(root->right , num);
	}
	
	else if(root->data > num){
		root->left = DeleteNode(root->left , num);
	}
	
	else{
		if(root->left == NULL && root->right == NULL){
			delete(root);
			root = NULL;
			return root;
		}
		
		else if(root->right == NULL){
			node *temp = root;
			root = root->left;
			delete(temp);
			return root;
		}
		
		else if(root->left == NULL){
			node *temp = root;
			root = root->right;
			delete(temp);
			return root;
		}
		
		else{
			node *temp = MinNode(root->right);
			root->data = temp->data;
			DeleteNode(root->right , temp->data);
		}
		
		return root;
	}
}

int main(){
	node *root = NULL;
	root = InsertNode(root , 20);
	InsertNode(root , 15);
	InsertNode(root , 25);
	InsertNode(root , 18);
	InsertNode(root , 10);
	InsertNode(root , 16);
	InsertNode(root , 19);
	InsertNode(root , 17);
	cout<<"\n"<<root<<"\n";
	Inorder(root);
	DeleteNode(root , 10);
	cout<<"\n";
	Inorder(root);  
	cout<<"\n"<<root<<"\n"; 
	SearchNode(root , 1);  
}
