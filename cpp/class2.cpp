#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class candidate{
	int Rno;
	char name[50];
	float score;
	char remark[30];
	
	public:
		void AssignRem(void);
		void Enter(void);
		void Display(void);
};

void candidate::Enter(){
	cout<<"ENTER THE REGISTRATION NO: ";
	cin>>Rno;
	cin.ignore();
	cout<<"ENTER NAME: ";
	cin.getline(name,50);
	cout<<"ENTER MARKS SCORED: ";
	cin>>score;
}

void candidate::AssignRem(){
	if(score<=50){
		cout<<"\nNOT SELECTED";
	}
	else{
		cout<<"\nSELECTED";
	}
}

void candidate::Display(){
	cout<<"REGISTRATION NUMBER: "<<Rno;
	cout<<"\nNAME: "<<name;
	cout<<"\nMARKS SCORED: "<<score;
	AssignRem();
}

int main(){
	candidate obj1;
	obj1.Enter();
	obj1.Display();
}
