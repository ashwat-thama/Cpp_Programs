#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int i;
	char name[30];
	int roll;
	int cls;
	float marks;
	
	ofstream fout;
	fout.open("stu.txt",ios::out);
	for(i=0;i<3;i++){
		cout<<"\nENTER NAME: ";
		cin.getline(name,30);
		cout<<"ENTER ROLL NO: ";
		cin>>roll;
		cout<<"ENTER CLASS: ";
		cin>>cls;
		cout<<"ENTER MARKS: ";
		cin>>marks;
		cin.ignore();
		fout<<name<<"\n"<<roll<<"\n"<<cls<<"\n"<<marks<<"\n";
	}
	fout.close();
	
	ifstream fin;
	fin.open("stu.txt",ios::in);
	for(i=0;i<3;i++){
		fin>>name;
		fin>>roll;
		fin>>cls;
		fin>>marks;
		cout<<"\n\nNAME: "<<name;
		cout<<"\nROLL NO: "<<roll;
		cout<<"\nCLASS: "<<cls;
		cout<<"\nMARKS: "<<marks;
	}
}
