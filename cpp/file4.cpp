#include<iostream>
#include<fstream>
using namespace std;

class employee{
	char name[30];
	int id;
	char company[30];
	float pay;
	
	public:
		void getdata(void){
			cout<<"ENTER THE NAME OF THE EMPLOYEE: ";
			cin.getline(name,30);
			cout<<"ENTER THE COMPANY NAME: ";
			cin.getline(company,30);
			cout<<"ENTER THE ID OF EMPLOYEE: ";
			cin>>id;
			cout<<"ENTER MONTHLY PAY: ";
			cin>>pay;
			cin.ignore();
		}
		
		void showdata(void){
			cout<<"\nTHA NAME OF THE EMPLOYEE: "<<name;
			cout<<"\nTHE ID OF THE EMPLOYEE: "<<id;
			cout<<"\nTHE COMPANY IS WHICH EMPLOYEE WORK'S: "<<company;
			cout<<"\nMONTHLY SALARY OF THE EMPLOYEE: "<<pay;
		}
};

int main(){
	employee emp[3];
	fstream file1;
	file1.open("employee.txt",ios::out | ios::in);
	if(!file1){
		cout<<"\nTHE FILE IS NOT OPPENED PROPERLY. \n";
	}
	for(int i=0;i<3;i++){
		emp[i].getdata();
		file1.write((char *)&emp[i],sizeof(emp[i]));
	}
	file1.seekg(0);
	cout<<"\nTHE DETAILS WRITTEN IN FILE IS: \n";
	
	for(int i=0;i<3;i++){
		file1.read((char *)&emp[i],sizeof(emp[i]));
		emp[i].showdata();
	}
	
	file1.close();
	return 0;
}
