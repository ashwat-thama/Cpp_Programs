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
		
		int getid(void){
			return id;
		}
};

int main(){
	employee emp;
	ofstream empout;
	empout.open("employee2.dat",ios::out | ios::binary);
	for (int i=0;i<3;i++){
		emp.getdata();
		empout.write((char *)&emp,sizeof(emp));
	}
	empout.close();
	
	int rn;
	cout<<"\nENTER THE ID OF EMPLOYEE YOU WANT TO SEARCH FOR: ";
	cin>>rn;
	char ch='Y';
	ifstream empin;
	empin.open("employee2.dat",ios::in | ios::binary);
	while(!empin.eof()){
		empin.read((char *)&emp,sizeof(emp));
		if(rn==emp.getid()){
			emp.showdata();
			ch='N';
			break;
		}
	}
	if(ch=='Y'){
		cout<<"\nNOT FOUND\n";
	}
	empin.close();
	return 0;
}
