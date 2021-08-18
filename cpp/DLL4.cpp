// INSERTION AFTER A GIVEN POS IN DOUBLY LINKED LIST
#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};
node *head = NULL;

void insertEnd(int num){
	node *new_node = new node;
	new_node->data = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	if(head == NULL){
		head = new_node;
	}
	else{
		node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
}

void display(void){
	node *ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
}

void insertPos(int num , int pos){
	node *new_node = new node;
	new_node->data = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	node *temp = head;
	for(int i=0; i<pos-1; i++){
		temp = temp->next;
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	temp = new_node->next;
	temp->prev = new_node;
}

int main(){
	insertEnd(1);
	insertEnd(2);
	insertEnd(3);
	insertEnd(5);
	display();
	insertPos(4,3);
	cout<<"\n";
	display();
}
