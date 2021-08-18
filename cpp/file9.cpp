#include<iostream>
#include<fstream>
using namespace std;

class batsman{
	char name[30];
	int score;
	int overs;
	int hscore;
	
	public: 
		void getdata(void){
			cout<<"ENTER THE NAME OF BATSMAN: ";
			cin.getline(name,30);
			cout<<"ENTER THE RUNS MADE: ";
			cin>>score;
			cout<<"ENTER THE NO OF OVERS PLAYED: ";
			cin>>overs;
			cout<<"ENTER THE HIGHEST SCORE MADE: ";
			cin>>hscore;
			cin.ignore();
		}
		
		void showdata(void){
			cout<<"\nNAME OF BATSMAN: "<<name;
			cout<<"\nRUNS SCORED: "<<score;
			cout<<"\nOVERS PLAYED: "<<overs;
			cout<<"\nHIGH SCORE OF ALL TIME: "<<hscore;
		}
		
		char getname(void){
			return *name;
		}
};

int main(){
	batsman bat;
	ofstream batout;
	batout.open("batsman.dat",ios::out | ios::binary);
	for(int i=0;i<3;i++){
		bat.getdata();
		batout.write((char *)&bat,sizeof(bat));
	}
	batout.close();
	
	char enter[30];
	cout<<"ENTER THE NAME OF PLAYER YOU WANT TO SEARCH FOR: ";
	cin.getline(enter,30);
	char ch='Y';
	ifstream batin;
	batin.open("batsman.dat",ios::in | ios::binary);
	while(!batin.eof()){
		batin.read((char *)&bat,sizeof(bat));
		if(enter==bat.getname(void)){
			cout<<"\nFOUND\n";
			bat.showdata();
			ch='N';
		}
	}
	if(ch=='Y'){
		cout<<"\nNOT FOUND\n";
	}
	batin.close();
	return 0;
}
