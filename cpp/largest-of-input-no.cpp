#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n;
	int large=0;
	cout<<"PRESS 0 TO TERMINATE: \n";
	do{
		cout<<"ENTER THE NUMBER: ";
		cin>>n;
		if(n>=large){
			large=n;
		}
	}while(n!=0);
	cout<<"\n"<<large;
}
