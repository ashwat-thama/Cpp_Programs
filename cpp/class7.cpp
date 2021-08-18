#include<iostream>
#include<conio.h>
using namespace std;

class train{
	int trainno;
	char trainname[50];
	float distance;
	float fuel;
	
	void cal_fuel(void){
		if(distance<=500){
			fuel=1000;
		}
		else if(distance>500 && distance<=1500){
			fuel=2000;
		}
		else if(distance>1500){
			fuel=3500;
		}
	}
	
	public:
		void getdata(void);
		void showdata(void);
		int no(void){
			return trainno;
		}
};

void train::getdata(){
	cout<<"\nENTER TRAIN NO: ";
	cin>>trainno;
	cin.ignore();
	cout<<"ENTER TRAIN NAME: ";
	cin.getline(trainname,50);
	cout<<"ENTER THE DISTANCE OF JOURNEY: ";
	cin>>distance;
	cal_fuel();
}

void train::showdata(){
	cout<<"\nTRAIN NO: "<<trainno;
	cout<<"\nTRAIN NAME: "<<trainname;
	cout<<"\nDISTANCE COVERED: "<<distance;
	cout<<"FUEL USED: "<<fuel;
}

int main(){
	train obj1[5];
	for(int i=0;i<5;i++){
		cout<<"\nENTER DETAILS OF TRAIN "<<(i+1)<<" : ";
		obj1[i].getdata();
	}
	
	int no;
	cout<<"ENTER THE TRAIN NO YOU WANT TO GET INFO OF: ";
	cin>>no;
	for(int i=0;i<5;i++){
		if(no==obj1[i].no()){
			obj1[i].showdata();
		}
	}
}
