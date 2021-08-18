#include<iostream>
#include<stdio.h>
using namespace std;

class shop{
	int itemno[10];
	float price[10];
	
	public:
		void intitialize(void);
		void largest(void);
		void sum(void);
};

void shop::intitialize(){
	for(int i=0;i<10;i++){
		cout<<"ENTER THE ITEM NO: ";
		cin>>itemno[i];
		cout<<"ENTER THE PRICE OF ITEM: ";
		cin>>price[i];
	}
}

void shop::largest(){
	int large=price[0];
	for(int i=0;i<10;i++){
		if(price[i]>large){
			large=price[i];
		}
	}
	cout<<"THE MOST EXPENSIVE ITEM IS OF: "<<large<<" RS";
}

void shop::sum(){
	float sum=0;
	for(int i=0;i<10;i++){
		sum+=price[i];
	}
	cout<<"\nTOTAL: "<<sum;
}

int main(){
	shop obj;
	obj.intitialize();
	obj.largest();
	obj.sum();
}
