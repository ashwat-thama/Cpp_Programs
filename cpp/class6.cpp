#include<iostream>
#include<conio.h>
using namespace std;

class Flight{
	int FlightNo;
	char FlightName[50];
	float Distance;
	float Fuel;
	
	void CalFuel(void){
		if(Distance<=1000){
			Fuel=500;
		}
		else if(Distance<=2000 && Distance>1000){
			Fuel=1100;
		}
		else if(Distance>2000){
			Fuel=2200;
		}
	}
	
	public:
		void Feed_info(void);
		void Show_fuel(void);
};

void Flight::Feed_info(){
	cout<<"ENTER FLIGHT NUMBER: ";
	cin>>FlightNo;
	cin.ignore();
	cout<<"ENTER FLIGHT NAME: ";
	cin.getline(FlightName,50);
	cout<<"ENTER THE DISTANCE OF JOURNEY: ";
	cin>>Distance;
	CalFuel();
}

void Flight::Show_fuel(){
	cout<<"\nFLIGHT NO: "<<FlightNo;
	cout<<"\nFLIGHT NAME: "<<FlightName;
	cout<<"\nDISTANCE OF JOURNEY: "<<Distance;
	cout<<"\nFUEL REQUIRED: "<<Fuel;
}

int main(){
	Flight obj1;
	obj1.Feed_info();
	obj1.Show_fuel();
}
