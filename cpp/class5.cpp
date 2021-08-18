#include<iostream>
#include<conio.h>
using namespace std;

class stock{
	int Icode;
	char ItemName[30];
	float price;
	int qty;
	float discount;
	void FindDisc(void){
		if(qty<=50){
			discount=(price/100)*0;
		}
		else if(qty>50 && qty<=100){
			discount=(price/100)*5;
		}
		else if(qty>100){
			discount=(price/100)*10;
		}
	}
	
	public:
		void Buy(void);
		void Show(void);
};

void stock::Buy(){
	cout<<"ENTER THE ITEM CODE: ";
	cin>>Icode;
	cin.ignore();
	cout<<"ENTER THE NAME OF ITEM: ";
	cin.getline(ItemName,30);
	cout<<"ENTER THE PRICE OF ITEM: ";
	cin>>price;
	cout<<"ENTER QUANTITY YOU WANT: ";
	cin>>qty;
	FindDisc();
}

void stock::Show(){
	cout<<"\nITEM NO: "<<Icode;
	cout<<"\nNAME: "<<ItemName;
	cout<<"\nPRICE: "<<price;
	cout<<"\nQUANTITY: "<<qty;
	cout<<"\nDISCOUNT: "<<discount;
}

int main(){
	stock obj1;
	obj1.Buy();
	obj1.Show();
}

