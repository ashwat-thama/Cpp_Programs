#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int length,width,area,perimeter;
	cout<<"ENTER THE LENGTH OF RECTANGLE: ";
	cin>>length;
	cout<<"ENTER THE WIDTH OF THE RECTNGLE: ";
	cin>>width;
	perimeter=2*(length+width);
	area=length*width;
	cout<<"\nPERIMETER: "<<perimeter;
	cout<<"\nAREA: "<<area;
	if(area>perimeter){
		cout<<"\nAREA IS GREATER";
	}
	else{
		cout<<"\nPERIMETER IS GREATER";
	}
}
