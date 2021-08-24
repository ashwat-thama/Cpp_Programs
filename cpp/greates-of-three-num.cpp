#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"ENTER THE FIRST NUM: ";
	cin>>num1;
	cout<<"ENTER THE SECOND NUM: ";
	cin>>num2;
	cout<<"ENTER THE THIRD NUM: ";
	cin>>num3;
	if(num1>num2){
		if(num1>num3){
			cout<<num1<<" IS THE GREATEST";
		}
		else{
			cout<<num3<<" IS THE GREATEST";
		}
	}
	else{
		if(num2>num3){
			cout<<num2<<" IS THE GREATEST";
		}
		else{
			cout<<num3<<" IS THE GREATEST";
		}
	}
}
