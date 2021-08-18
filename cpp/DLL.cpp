// INSERTION AT END IN DOUBLY LINKED LIST
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
	node *temp1 = head;
	while(temp1 != NULL){
		cout<<temp1->data<<" ";
		temp1 = temp1->next;
	}
}

int main(){
	insertEnd(1);
	insertEnd(2);
	insertEnd(3);
	insertEnd(4);
	display();
}
