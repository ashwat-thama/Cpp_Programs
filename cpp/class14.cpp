#include<iostream>
#include<conio.h>
using namespace std;
class batting{
	char name[30];
	int total;
	char status[10];
	char outsource[15];
	
	public:
		void getdata(void){
			cout<<"ENTER THE NAME OF THE BATSMAN: ";
			cin.getline(name,30);
			cout<<"ENTER IF OUT OR NOT: ";
			cin.getline(status,10);
			cout<<"ENTER WHAT IS THE SOURCE OF OUT: ";
			cin.getline(outsource,15);
		}
		
		void update(void){
			int i,run[15];
			for(i=0;i<15;i++){
				cout<<"\nSCORE ON "<<(i+1)<<" BALL: ";
				cin>>run[i];
				total+=run[i];
			}
		}
		
		void showdata(void){
			cout<<"\n\nNAME: "<<name;
			cout<<"\nRUNS: "<<total;
			cout<<"\nSTATUS: "<<status;
			cout<<"\nOUT SOURCE: "<<outsource;
		}
};

int main(){
	batting batsman1;
	batsman1.getdata();
	batsman1.update();
	batsman1.showdata();
}
