#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};
node *head = NULL;
void push(int num){
	node *new_node = new node();
	new_node->data = num;
	new_node->next = NULL;
	if(head == NULL){
		head = new_node;
	}
	else{
		node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = new_node;
	}
}

void pop(void){
	if(head == NULL){
		cout<<"UNDERFLOW";
	}
	else{
		node *temp = head;
		node *prev = head;
		while(temp->next != NULL){
			prev = temp;
			temp = temp->next;
		}
		delete(temp);
	}
}

void peek(void){
	node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	cout<<temp->data<<" ";
}

void display(void){
	
}
