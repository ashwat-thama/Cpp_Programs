#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float choice,area,perimeter,radius;
	float pi=3.14;
	cout<<"PRESS 1 FOR AREA | PRESS 2 FOR PERIMETER : ";
	cin>>choice;
	if(choice==1){
		cout<<"ENTER THE RADIUS OF CIRCLE: ";
		cin>>radius;
		area=pi*radius*radius;
		cout<<"THE AREA: "<<area;
	}
	else{
		cout<<"ENTER THE RADIUS OF THE CIRCLE: ";
		cin>>radius;
		perimeter=2*pi*radius;
		cout<<"THE PERIMETER IS: "<<perimeter;
	}
}
