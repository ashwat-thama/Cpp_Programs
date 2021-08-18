#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float c,f,temp;
	char ch;
	cout<<"PRESS F (farenhite) | PRESS C (celcius) : ";
	cin>>ch;
	if(ch=='f' || ch=='F'){
		cout<<"ENTER THE TEMPERATURE IS FARENHITE: ";
		cin>>f;
		c = (f-32)*5/9;
		cout<<"TEMPERATURE IN CELCIUS: "<<c;
	}
	else{
		cout<<"ENTER TEMPERATURE IS CELCIUS: ";
		cin>>c;
		f = (c*9/5)+32;
		cout<<"TEMPERATURE IN FARENHITE IS: "<<f;
	}
}
