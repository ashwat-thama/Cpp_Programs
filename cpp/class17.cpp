#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class student{
	private:
		string name;
		int rollNo;
		float marks[4];
		float perc;
		public:
		void getData();
		void showData();
};

void student::getData(){
	cout<<"ENTER THE NAME: ";
	cin>>name;
	cout<<"ENTER THE ROLL NO: ";
	cin>>rollNo;
	for(int i=0 ; i<4 ; i++){
		cout<<"ENTER MARKS IN SUB "<<i+1<<" : ";
		cin>>marks[i];
		perc += marks[i];
	}
	perc = (perc/5)*100;
}

void student::showData(){
	cout<<"NAME: "<<name;
	cout<<"ROLL NO: "<<rollNo;
	for(int i=0 ; i<4 ; i++){
		cout<<"MARKS IS SUB "<<i+1<<" : "<<marks[i];
		cout<<"\n";
	}
	cout<<"PERCENTAGE: "<<perc;
}

int main(){
	student stu;
	stu.getData();
	stu.showData();
}

