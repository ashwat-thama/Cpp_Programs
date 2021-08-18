#include<iostream>
#include<fstream>
using namespace std;
class student{
	int rn;
	char name[30];
	float marks;
	
	public:
		void getdata(void);
		void showdata(void);
};

void student::getdata(){
	cout<<"\nENTER THE NAME: ";
	cin.getline(name,30);
	cout<<"ENTER ROLL NO: ";
	cin>>rn;
	cout<<"ENTER MARKS: ";
	cin>>marks;
	cin.ignore();
}

void student::showdata(){
	cout<<"\nNAME: "<<name;
	cout<<"\nROLL NO: "<<rn;
	cout<<"\nPERCENTAGE: "<<marks<<"\n";
}

int main(){
	student stu[3];
	fstream file;
	file.open("student",ios::in | ios::out);
	if(!file){
		cout<<"\nCANNOT OPEN FILE";
	}
	cout<<"\nENTER THE DETAILS OF 3 STUDENT";
	for(int i=0;i<3;i++){
		stu[i].getdata();
		file.write((char *)&stu[i],sizeof(stu[i]));
	}
	
	file.seekg(0);
	
	cout<<"\nTHE DETAILS WRITTEN IN THE FILE IS";
	
	for(int i=0;i<3;i++){
		file.read((char *)&stu[i],sizeof(stu[i]));
		stu[i].showdata();
	}
	file.close();
}
