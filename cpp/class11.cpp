#include<iostream>
#include<conio.h>
using namespace std;

class bowlling{
	char firstname[15];
	char lastname[15];
	int overs;
	int maiden;
	int runs;
	int wicket;
	
	public:
		void getdata(void);
		void update(void);
		void showdata(void);
};

void bowlling::getdata(){
	cout<<"ENTER THE FIRST NAME: ";
	cin.getline(firstname,15);
	cout<<"ENTER THE LAST NAME: ";
	cin.getline(lastname,15);
	cout<<"ENTER NO OF OVERS BOWLED: ";
	cin>>overs;
	cout<<"ENTER NO OF OVERS MAIDEN: ";
	cin>>maiden;
	cout<<"ENTER NO OF RUNS GIVEN: ";
	cin>>runs;
	cout<<"ENTER NO OF WICKET TAKEN: ";
	cin>>wicket;
}

void bowlling::update(){
	cin.ignore();
	cout<<"ENTER THE FIRST NAME: ";
	cin.getline(firstname,15);
	cout<<"ENTER THE LAST NAME: ";
	cin.getline(lastname,15);
	cout<<"ENTER NO OF OVERS BOWLED: ";
	cin>>overs;
	cout<<"ENTER NO OF OVERS MAIDEN: ";
	cin>>maiden;
	cout<<"ENTER NO OF RUNS GIVEN: ";
	cin>>runs;
	cout<<"ENTER NO OF WICKET TAKEN: ";
	cin>>wicket;
	cin.ignore();
}

void bowlling::showdata(){
	cout<<"\nNAME: "<<firstname<<" "<<lastname;
	cout<<"\nNO OF OVERS: "<<overs;
	cout<<"\nNO OF MAIDEN OVERS: "<<maiden;
	cout<<"\nNO OF RUNS MADE: "<<runs;
	cout<<"\nNO OF WICKET TAKEN: "<<wicket;
}

int main(){
	bowlling bowler;
	bowler.getdata();
	char ch;
	
		cout<<"DO YOU WANT TO UPDATE ANY INFORMATION (Y/N): ";
		cin>>ch;
		
		if(ch=='Y' || ch=='y'){
			bowler.update();
		}
	
	
	bowler.showdata();
}
