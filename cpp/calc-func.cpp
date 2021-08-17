#include<iostream>
#include<conio.h>
using namespace std;
int calc(int,int,char);
int main(){
	int a,b;
	char ch;
	cout<<"ENTER THE VALUE OF A: ";
	cin>>a;
	cout<<"ENTER THE VALUE OF B: ";
	cin>>b;
	cout<<"ENTER YOUR CHOICE (+,-,*,/): ";
	cin>>ch;
	calc(a,b,ch);
}
calc(int x,int y,char op){
	switch(op){
		case '+' : cout<<"ADDITION: "<<(x+y);
				break;
				
		case '-' : cout<<"SUBTRACTION: "<<(x-y);
				break;
				
		case '*' : cout<<"MULTIPLICATION: "<<(x*y);
				break;
				
		case '/' : if(x<y){
				cout<<"CAN'T PERFORM";
				}
				else{
					cout<<"DEVISION: "<<(x/y);
				}		
				break;
				
		default: cout<<"INVALID INPUT";
	}
}
