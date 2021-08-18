// INSERTION AT BEGINNING IN DOUBLY LINKED LIST
#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
};
node *head = NULL;
node *prev = NULL;

void insertBeg(int num){
	node *new_node = new node;
	new_node->data = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	if(head == NULL){
		head = new_node;
	}
	else{
		new_node->next = head;
		head->prev = new_node;
		head = new_node;
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
	insertBeg(1);
	insertBeg(2);
	insertBeg(3);
	insertBeg(4);
	display();
}
