#include<iostream>
#define n 5
using namespace std;
int dequeue[n];
int front = -1;
int rear = -1;

// Insertion From The front End
void EnqueueFront(int num){
	if(front == (rear+1)%n){
		cout<<"QUEUE OVERFLOW";
	}
	else if(front == -1 && rear == -1){
		front = 0;
		rear = 0;
		dequeue[front] = num;
	}
	else if(front == 0){
		front = n-1;
		dequeue[front] = num;
	}
	else{
		front--;
		dequeue[front] = num;
	}
}


// Insertion From The Back End	
	void EnqueueRear(int num){
		if(front == (rear+1)%n){
			cout<<"QUEUE OVERLOADED";
		}
		else if(front == -1 && rear == -1){
			rear = 0;
			front = 0;
			dequeue[rear] = num;
		}
		else if(rear == n-1){
			rear = 0;
			dequeue[rear] = num;
		}
		else{
			rear++;
			dequeue[rear] = num;
		}
	}
	
//Deletion From The Front End		
	void DequeueFront(){
		if(front == -1 && rear == -1){
			cout<<"QUEUE UNDERFLOW";
		}
		else if(front == rear){
			front = rear = -1;
		}
		else if(front == n-1){
			front = 0;
		}
		else{
			front++;
		}
	}


//Deletion From The Rear End	
	void DequeueRear(){
		if(front == -1 && rear == -1){
			cout<<"QUEUE UNDERFLOW";
		}
		else if(front == rear){
			front = rear = -1;
		}
		else if(rear == 0){
			rear = n-1;
		}
		else{
			rear--;
		}
	}
	
	void display(){
		int i = front;
		while(i != rear){
			cout<<dequeue[i]<<" ";
			i = (i+1) % n;
		}
		cout<<dequeue[i];
	}


int main(){
	EnqueueFront(1);
	EnqueueFront(2);
	EnqueueFront(3);
	EnqueueRear(4);
	EnqueueRear(5);
	display();
	DequeueRear();
	cout<<"\n";
	display();
	DequeueFront();
	cout<<"\n";
	display();
}

