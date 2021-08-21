#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class train{
	public:
	int tno;
	char tname[20];
	char from[20];
	char to[20];
	
		public:
		void getdata(void){
			cout<<"ENTER THE TRAIN NO: ";
			cin>>tno;
			cout<<"ENTER THE NAME OF TRAIN: ";
			cin.ignore();
			cin.getline(tname,20);
			cout<<"ENTER THE STARTING POINT: ";
			cin.ignore();
			cin.getline(from,20);
			cout<<"ENTER THE FINAL DESTINATION: ";
			cin.ignore();
			cin.getline(to,20);
		}
		
		void showdata(void){
			cout<<"\nTRAIN NAME: "<<tname;
			cout<<"\nTRAIN NO: "<<tno;
			cout<<"\nFROM: "<<from;
			cout<<"\nTO: "<<to;
		}
		
		char* getto(void){
			return to;
		}
};

int main(){
	train trn;
	ofstream trainout;
	trainout.open("train.dat",ios::out | ios::binary | ios::app);
	char ch='Y';
	while(ch=='y' | ch=='Y'){
		trn.getdata();
		trainout.write((char *)&trn,sizeof(trn));
		cout<<"DO YOU WANT TO ENTER MORE (Y/N): ";
		cin>>ch;
	}
	trainout.close();
	
	ifstream trainin;
	trainin.open("train.dat",ios::in | ios::binary);
	trainin.seekg(0);
	char opt='Y';
	int count=0;
	//char city[30];
	//cout<<"\nENTER THE CITY NAME: ";
	//cin.ignore();
	//cin.getline(city,30);
	while(!trainin.eof()){
		trainin.read((char *)&trn,sizeof(trn));
		if(strcmp(trn.to , "Delhi")==0){
			cout<<"\nFOUND: ";
			trn.showdata();
			count++;
			opt='N';
			break;
		}
	}
	if(opt='Y'){
		cout<<"\nNOT FOUND: ";
	}
	cout<<"\nNO OF TRAINS: "<<count;
	
	trainin.close();
	
}
