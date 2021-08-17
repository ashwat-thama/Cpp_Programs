#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float num,i=0,avg,div;
	cout<<"PRESS 0 TO TERMINATE\n";
	float sum=0;
		do{
		cout<<"ENTER THE NUM: ";
		cin>>num;
		sum+=num;
		i++;
		div=i-1;
	}while(num!=0);
	avg=sum/div;
	cout<<"AVERAGE: "<<avg;
}
