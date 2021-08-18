#include<iostream>
#include<stdio.h>
using namespace std;

//------      defining structure      ------//

struct addr{
	int houseno;
	char area[30];
	char city[30];
	char state[30];
};

struct info{
	int id;
	char name[50];
	addr address;
	int salary;
};

struct info employee[3];


//        -------- main function --------        //

void display(int);
void enter(void);

int main(){
	int no,i;
	char ch;
	enter();
	do{
		cout<<"\nENTER THE EMPLOYEE ID YOU WANT TO SEARCH FOR: ";
		cin>>no;
		for(i=0;i<3;i++){
			if(no==employee[i].id){
				cout<<"\n";
				display(i);
				break;
			}
			else{
				cout<<"\nEMPLOYEE NOT FOUND";
			}
		}
		cout<<"\nDO YOU WANT TO SEARCH AGAIN (y/n): ";
		cin>>ch;
	}while(ch=='y' && ch=='Y');
	
	return 0;
}

void enter(void){
	int i;
	for(i=0;i<3;i++){
		cout<<"ENTER THE ID OF THE EMPLOYEE: ";
		cin>>employee[i].id;
		cout<<"\nENTER THE NAME OF THE EMPLOYEE: ";
		gets(employee[i].name);
		cout<<"\nENTER THE ADDRESS OF THE EMPLOYEE: \n";
		cout<<"ENTER HOUSE NO: ";
		cin>>employee[i].address.houseno;
		cout<<"\nENTER THE AREA: ";
		gets(employee[i].address.area);
		cout<<"\nENTER THE CITY: ";
		gets(employee[i].address.city);
		cout<<"\nENTER THE STATE: ";
		gets(employee[i].address.state);
		cout<<"\nENTER THE MONTHLY SALARY: ";
		cin>>employee[i].salary;
	}
}

void display(int a){
	cout<<"THE EMPLOYEE DATA IS AS FOLLOWS\n";
	cout<<"NAME: ";
	cout.write(employee[a].name,50);
	cout<<"\nID: "<<employee[a].id;
	cout<<"\nADDRESS: ";
	cout<<"\nHOUSE NO: "<<employee[a].address.houseno;
	cout<<"\nAREA: "<<employee[a].address.area;
	cout<<"\nCITY: "<<employee[a].address.city;
	cout<<"\nSTATE: "<<employee[a].address.state;
	cout<<"\nMONTHLY SALARY: "<<employee[a].salary;
}

