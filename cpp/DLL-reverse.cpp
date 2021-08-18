#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
}; 
node *head = NULL;

void insertEnd (int num){
	node *new_node = new node;
	new_node->data = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	if(head == NULL){
		head = new_node;
		cout<<"\nHEAD BEFORE REVERSE: "<<head<<"\n";
	}
	else{
		node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	cout<<"\nTHE ADDRESS OF LAST NODE: "<<temp<<"\n";
}

void display (void){
	node *ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
}

void reverse (void){
	node *current = head;
	node *nextnode;
	while(current != NULL){
		nextnode = current->next;
		current->next = current->prev;
		current->prev = nextnode;
		head = current;
		current = nextnode;
	}
	cout<<"\nREVERSE HEAD : "<<head;
}

int main(){
	insertEnd(1);
	insertEnd(2);
	insertEnd(3);
	insertEnd(4);
	insertEnd(5);
	display();
	reverse();
	cout<<"\n";
	display();
}
