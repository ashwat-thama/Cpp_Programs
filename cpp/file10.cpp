#include<iostream>
#include<fstream>
using namespace std;

class student{
	char name[30];
	int roll;
	float marks;
	char grade;
	
	public: 
		void getdata(void){
			cout<<"ENTER THE NAME OF THE STUDENT: ";
			cin.ignore();
			cin.getline(name,30);
			cout<<"ENTER THE ROLL NO OF STUDENT: ";
			cin>>roll;
			cout<<"ENTER THE PERCENTAGE OF STUDENT: ";
			cin>>marks;
			if(marks>90){
				grade='A';
			}
			else if(marks>70 && marks<=90){
				grade='B';
			}
			else if(marks>50 && marks<=70){
				grade='C';
			}
			else if(marks>30 && marks<=50){
				grade='D';
			}
			else if(marks<=30){
				grade='F';
			}
			
		}
				
		void showdata(void){
			cout<<"\nSTUDENT NAME: "<<name;
			cout<<"\nSTUDENT ROLL NO: "<<roll;
			cout<<"\nSTUDENT PERCENTAGE: "<<marks;
			cout<<"\nSTUDENT GRADE: "<<grade;	
		}
		
		int getroll(void){
			return roll;
		}
};

int main(){
	student stu;
	ofstream stuout;
	stuout.open("student11.dat",ios::app | ios::out | ios::binary);
	char ch='Y';
	while(ch=='y' | ch=='Y'){
		stu.getdata();
		stuout.write((char *)&stu,sizeof(stu));
		cout<<"DO YOU WANT TO ENTER MORE DATA (y/n): ";
		cin>>ch;
	}
	
	stuout.close();
	
	int no;
	cout<<"ENTER THE ROLL NO YOU WANT TO SEARCH FOR: ";
	cin>>no;
	char opt='Y';
	ifstream stuin;
	stuin.open("student11.dat",ios::app | ios::binary | ios::in);
	while(!stuin.eof()){
		stuin.read((char *)&stu,sizeof(stu));
		if(no==stu.getroll()){
			cout<<"\nFOUND: ";
			stu.showdata();
			opt='N';
			break;
		}
	}
	if(ch=='Y'){
		cout<<"\nNOT FOUND: ";
	}
	stuin.close();
	return 0;
}
