#include<iostream>
#include<fstream>
using namespace std;

class batsman{
	char name[30];
	int run;
	int overs;
	int hscore;
	
	public:
		void getdata(void){
			cout<<"ENTER THE NAME OF BATSMAN: ";
			cin.ignore();
			cin.getline(name,30);
			cout<<"ENTER THE RUNS MADE: ";
			cin>>run;
			cout<<"ENTER THE NO OF OVERS PLAYED: ";
			cin>>overs;
			cout<<"ENTER THE HIGHEST SCORE MADE: ";
			cin>>hscore;
		}
		
		void showdata(void){
			cout<<"\nNAME OF BATSMAN: "<<name;
			cout<<"\nNO OF RUNS MADE: "<<run;
			cout<<"\nNO OD OVERS PLAYED: "<<overs;
			cout<<"\nENTER THE HIGHEST SCORE: "<<hscore;
		}
		
		int getrun(void){
			return run;
		}
};

int main(){
	batsman bat;
	ofstream batout;
	batout.open("batsman11.dat",ios::out | ios::binary | ios::app);
	char ch='Y';
	while(ch=='y' | ch=='Y'){
		bat.getdata();
		batout.write((char *)&bat,sizeof(bat));
		cout<<"DO YOU WANT TO ENTER MORE (y/n): ";
		cin>>ch;
	}
	batout.close();
	
	int no;
	cout<<"ENTER THE RUNS FOR SEARCHING: ";
	cin>>no;
	char opt='Y';
	ifstream batin;
	batin.seekg(0);
	while(!batin.eof()){
		batin.read((char *)&bat,sizeof(bat));
		if(no==bat.getrun()){
			cout<<"\nFOUND: ";
			bat.showdata();
			opt='N';
			break;
		}
	}
	
	if(opt='Y'){
		cout<<"\nNOT FOUND: ";
	}
	
	batin.close();
	return 0;
}
