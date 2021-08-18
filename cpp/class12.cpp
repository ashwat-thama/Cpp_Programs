#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class travel{
	private:
		char code[30];
		int noadults;
		int nokids;
		int distance;
		float fare;
		
	public:
		travel(){
			strcpy(code,"NULL");
			noadults=0;
			nokids=0;
			distance=0;
			fare=0;
		}
		
		void assignfare(void){
			int totalfare;
			if(distance>=1000){
				totalfare=noadults*500+nokids*250;
			}
			else if(distance<1000 && distance>=500){
				totalfare=noadults*300+nokids*150;
			}
			else if(distance<500){
				totalfare=noadults*200+nokids*100;
			}
			fare=totalfare;
		}	
	
		void entertravel(void){
			cout<<"ENTER THE CODE: ";
			cin.getline(code,30);
			cout<<"ENTER NO OF ADULTS: ";
			cin>>noadults;
			cout<<"ENTER NO OF KIDS: ";
			cin>>nokids;
			cout<<"ENTER THE DISTANCE TRAVELED: ";
			cin>>distance;
			assignfare();
		}
		
		void showtravel(){
			cout<<"\n\nTHE CODE IS: "<<code;
			cout<<"\nNO OF ADULTS: "<<noadults;
			cout<<"\nNO OF KIDS: "<<nokids;
			cout<<"\nENTER THE DISTANCE: "<<distance;
			cout<<"\nTOTAL FARE: "<<fare;
		}
};

int main(){
	travel obj1;
	obj1.entertravel();
	obj1.showtravel();
}
