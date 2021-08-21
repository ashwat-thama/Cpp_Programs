#include<iostream>
#include<fstream>
using namespace std;

class employee{
	int empno;
	char name[30];
	char company[30];
	float pay;
	
	public:
		void getdata(void){
			cout<<"ENTER THE NAME OF EMPLOYEE: ";
			cin.ignore();
			cin.getline(name,30);
			cout<<"ENTER THE NAME OF COMPANY: ";
			cin.ignore();
			cin.getline(company,30);
			cout<<"ENTER THE EMPLOYEE ID: ";
			cin>>empno;
			cout<<"ENTER THE MONTHLY SALARY: ";
			cin>>pay;
		}
		
		void showdata(void){
			cout<<"\nNAME OF EMPLOYEE: "<<name;
			cout<<"\nNAME OF COMPANY: "<<company;
			cout<<"\nEMPLOYEE ID NO: "<<empno;
			cout<<"\nEMPLOYEE MONTHALY SALARY: "<<pay;
		}
		
		int getid(void){
			return empno;
		}
};

int main(){
	employee emp;
	ofstream empout;
	empout.open("employee11.dat",ios::binary | ios::out | ios::app);
	char ch='Y';
	while(ch=='y' | ch=='Y'){
		emp.getdata();
		empout.write((char *)&emp,sizeof(emp));
		cout<<"\nDO YOU WANT TO ENTER MORE (y/n): ";
		cin>>ch;
	}
	empout.close();
	
	int id;
	cout<<"ENTER THE EMPLOYEE ID YOU WANT TO SEARCH FOR: ";
	cin>>id;
	char opt='Y';
	
	ifstream empin;
	empin.open("employee11.dat",ios::binary | ios::in);
	empin.seekg(0);
	while(!empin.eof()){
		empin.read((char *)&emp,sizeof(emp));
		if(id==emp.getid()){
			cout<<"\nFFOUND";
			emp.showdata();
			opt='N';
			break;
		}
	}
	
	if(opt=='Y'){
		cout<<"\nNOT FOUND";
	}
	
	empin.close();
	return 0;
}
