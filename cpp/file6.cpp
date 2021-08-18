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
	employee emp[3];
	ofstream empout;
	empout.open("employee1.txt",ios::out);
	if(!empout){
		cout<<"\nTHE FILE IS NOT OPPENED\n"	;
	}
	for(int i=0;i<3;i++){
		emp[i].getdata();
		empout.write((char *)&emp[i],sizeof(emp[i]));
	}
	empout.close();
	
	int ids;
	cout<<"ENTER THE ID OF EMPLOYEE YOU WANT TO SEARCH FOR: ";
	cin>>ids;
	char ch='Y';
	ifstream empin;
	empin.open("employee.txt",ios::in);
	
			for(int i=0;i<3;i++){
			empin.read((char *)&emp[i],sizeof(emp[i]));
			while(!empin.eof()){
			if(emp[i].getid()==ids){
				cout<<"\nFOUND: \n\n";
				emp[i].showdata();
				ch='N';
				break;
			}
		}
		}
		empin.close();
	
	if(ch=='Y'){
		cout<<"\nNOT FOUND";
	}
}
