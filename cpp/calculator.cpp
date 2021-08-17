#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float num1 , num2 , add, sub , div , mul;
	int ch;
	cout<<"ENTER THE FIRST NUMBER: ";
	cin>>num1;
	cout<<"ENTER THE SECOND NUMBER: ";
	cin>>num2;
	cout<<"PRESS 1 FOR ADDITION\nPRESS 2 FOR SUBTRACTION\nPRESS 3 FOR DIVISION\nPRESS 4 FOR MULTIPLICATION\nENTER YOUR CHOICE: ";
	cin>>ch;
	if(ch==1){
		add=num1+num2;
		cout<<"ADDITION : "<<add;
	}
	else if(ch==2){
		sub=num1-num2;
		cout<<"SUBTRACTION : "<<sub;
	}
	else if(ch==3){
		div=num1/num2;
		cout<<"DIVISION : "<<div;
	}
	else if(ch==4){
		mul=num1*num2;
		cout<<"MULTIPLICATION : "<<mul;
	}
	else{
		cout<<"WRONG INPUT !!";
	}
}
