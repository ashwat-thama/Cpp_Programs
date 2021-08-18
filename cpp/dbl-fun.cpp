#include<iostream>
#include<conio.h>
using namespace std;
void dbl(int);
int main(){
	int a;
	cout<<"ENTER THE NUMBER: ";
	cin>>a;
	dbl(a);
}
void dbl(int x){
	cout<<"DOUBLE: "<<(x*x);
}
