#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char name[30];
	int roll;
	float marks;
	
	ofstream fout;
	fout.open("data",ios::out);
	cout<<"ENTER THE NAME: ";
	cin.getline(name,30);
	cout<<"ENTER THE ROLL NO: ";
	cin>>roll;
	cout<<"ENTER MARKS: ";
	cin>>marks;
	cin.ignore();
	fout<<name<<"\n"<<roll<<"\n"<<marks;
	
	fout.close();
	
	ifstream fin;
	fin>>name;
	fin>>roll;
	fin>>marks;
	cout<<"\nNAME: "<<name;
	cout<<"\nROLL NO: "<<roll;
	cout<<"\nMARKS: "<<marks;
	
	fin.close();
}
