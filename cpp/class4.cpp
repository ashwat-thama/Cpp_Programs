#include<iostream>
#include<stdio.h>
using namespace std;

class box{
	int no;
	float side;
	float area;
	float ExecArea(void){
		area=side*side;
	}
	
	public:
		void GetBox(void);
		void ShowBox(void);
};

void box::GetBox(){
	cout<<"ENTER THE BOX NO: ";
	cin>>no;
	cout<<"ENTER THE SIZE OF ONE SIDE: ";
	cin>>side;
	ExecArea();
}

void box::ShowBox(){
	cout<<"\nBOX NUMBER: "<<no;
	cout<<"\nSIZE OF ONE SIDE: "<<side;
	cout<<"\nAREA OF BOX: "<<area;
}

int main(){
	box boxes[5];
	for(int i=0;i<5;i++){
		boxes[i].GetBox();
	}
	for(int i=0;i<5;i++){
		cout<<"\nTHE DETAILS OF "<<(i+1)<<" BOX: ";
		boxes[i].ShowBox();
	}
}
