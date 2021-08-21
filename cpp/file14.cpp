#include<iostream>
#include<fstream>
using namespace std;

class television{
	char company[30];
	int modelno;
	float inch;
	float price;
	
	public:
		void getdata(void){
			cout<<"ENTER THE COMPANY NAME: ";
			cin.ignore();
			cin.getline(company,30);
			cout<<"ENTER THE MODEL NO: ";
			cin>>modelno;
			cout<<"ENTER THE SCREEN SIZE: ";
			cin>>inch;
			cout<<"ENTER THE PRICE: ";
			cin>>price;
		}
		
		void showdata(void){
			cout<<"\nCOMPANY NAME: "<<company;
			cout<<"\nMODEL NO: "<<modelno;
			cout<<"\nSCREEN SIZE: "<<inch;
			cout<<"\nTOTAL PRICE: "<<price;
		}
		
		int getmodelno(void){
			return modelno;
		}
};

int main(){
	television tv[3];
	ofstream tvout;
	tvout.open("television.dat",ios::binary | ios::out );
	for(int i=0;i<3;i++){
		tv[i].getdata();
		tvout.write((char *)&tv[i],sizeof(tv[i]));
	}
	tvout.close();
	
	int no;
	char ch='Y';
	cout<<"\nENTER THE MODEL NO YOU WANT TO SEARCH: ";
	cin>>no;
	ifstream tvin;
	tvin.open("television.dat",ios::binary | ios::in);
	while(!tvin.eof()){
		for(int i=0;i<3;i++){
				tvin.read((char *)&tv[i],sizeof(tv[i]));
				if(no==tv[i].getmodelno()){
					cout<<"\nFOUND\n";
					tv[i].showdata();
					ch='N';
					break;
			}
		}
	}
	
	if(ch=='Y'){
		cout<<"\nNOT FOUND";
	}
	tvin.close();
	return 0;
	
}
