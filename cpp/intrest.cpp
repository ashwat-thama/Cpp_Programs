#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float year,amount,rate,intrest;
	cout<<"ENTER THE AMOUNT: ";
	cin>>amount;
	cout<<"ENTER THE YEAR: ";
	cin>>year;
	if(amount<2000 && year>=2){
		rate=5;
		intrest=(amount*rate*year)/100;
	}
	else if(2000<=amount<6000 && year>=2){
		rate=7;
		intrest=(amount*rate*year)/100;
	}
	else if(amount>6000 && year<=1){
		rate=8;
		intrest=(amount*rate*year)/100;
	}
	else if(year>=5){
		rate=10;
		intrest=(amount*rate*year);
	}
	else{
		rate=3;
		intrest=(amount*rate*year);
	}
	
	cout<<"INTREST: "<<intrest;
}
