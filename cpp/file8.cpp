#include<iostream>
#include<fstream>
using namespace std;

class laptop{
	char brand[30];
	char model[30];
	int mno;
	float price;
	
	public: 
		void getdata(void){
			cout<<"ENTER THE BRAND NAME: ";
			cin.getline(brand,30);
			cout<<"ENTER THE MODEL NAME: ";
			cin.getline(model,30);
			cout<<"ENTER MODEL NO: ";
			cin>>mno;
			cout<<"ENTER THE PRICE: ";
			cin>>price;
			cin.ignore();
		}
		
		void showdata(void){
			cout<<"\nBRAND NAME: "<<brand;
			cout<<"\nMODEL NAME: "<<model;
			cout<<"\nMODEL NO: "<<mno;
			cout<<"\nTOTAL PRICE: "<<price<<"\n";
		}
		
		int getmno(void){
			return mno;
		}
};

int main(){
	laptop lappy;
	ofstream lappyout;
	lappyout.open("laptop.dat",ios::out | ios::binary);
	for(int i=0;i<3;i++){
		lappy.getdata();
		lappyout.write((char *)&lappy,sizeof(lappy));
	}
	lappyout.close();
	
	int no;
	cout<<"\nENTER THE MAODEL NO YOU WANT TO SEARCH FOR: ";
	cin>>no;
	char ch='Y';
	ifstream lappyin;
	lappyin.open("laptop.dat",ios::in | ios::binary);
	while(!lappyin.eof()){
		lappyin.read((char *)&lappy,sizeof(lappy));
		if(no==lappy.getmno()){
			cout<<"\nFOUND\n";
			lappy.showdata();
			ch='N';
			break;
		}
	}
	if(ch=='Y'){
		cout<<"\nNOT FOUND";
	}
	
	lappyin.close();
	return 0;
}

