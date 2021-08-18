#include<iostream>
#include<conio.h>
using namespace std;

class admission{
	int admno;
	char name[50];
	char Class[20];
	float fees;
	
	public:
		void getdata(void);
		void showdata(void);
		int admno1(void);
};

void admission::getdata(void){
	cout<<"ENTER THE NAME OF STUDENT: ";
	cin.getline(name,50);
	cout<<"ENTER ADMISSION NO: ";
	cin>>admno;
	cin.ignore();
	cout<<"ENTER CLASS: ";
	cin.getline(Class,20);
	cout<<"ENTER FEES DEPOSITED: ";
	cin>>fees;
	cin.ignore();
}

void admission::showdata(void){
	cout<<"\nNAME OF STUDENT: "<<name;
	cout<<"\nADMISSION NO: "<<admno;
	cout<<"\nCLASS: "<<Class;
	cout<<"\nFEES DEPOSITED: "<<fees;	
}

int admission::admno1(void){
	return admno;
}

int main(){
	admission student[5];
	for(int i=0;i<5;i++){
		student[i].getdata();
	}
	
	int no;
	cout<<"ENTER THE ADMISSON NO OF STUDENT YOU WANT TO SEARCH FOR: ";
	cin>>no;
	
	for(int i=0;i<5;i++){
		if(no==student[i].admno1()){
			student[i].showdata();
		}
	}
}
