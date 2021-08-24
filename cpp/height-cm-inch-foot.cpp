#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float height,foot,inch;
	cout<<"ENTER YOU HEIGHT IS CM: ";
	cin>>height;
	inch=height/2.54;
	foot=inch/12;
	cout<<"HEIGHT IN INCHES: "<<inch;
	cout<<"\nHEIGHT IN FOOT: "<<foot;
}
