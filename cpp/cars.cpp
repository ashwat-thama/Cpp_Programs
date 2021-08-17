#include<iostream>
using namespace std;
class cars{
	public: 
	char name[30];
	int no;
	float price;
	void input (){
		cout<<"ENTER THE NAME OF THE CAR: ";
		gets(name);
		cout<<"ENTER THE MODEL NO: ";
		cin>>no;
		cout<<"ENTER THE PRICE OF THE CAR: ";
		cin>>price;
		cin.ignore();
	}
	
	void display (){
		cout<<"\nENTER THE NAME OF THE CAR: ";
		puts(name);
		cout<<"\nENTER THE MODEL NO: "<<no;
		cout<<"\nENTER THE PRICE OF THE CAR: "<<price;
	}
};

int main(){
	cars car;
	car.input();
	car.display();
}


