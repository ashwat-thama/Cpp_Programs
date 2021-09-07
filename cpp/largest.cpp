#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,c,high,med,low;
	cout<<"ENTER THE VALUE OF A: ";
	cin>>a;
	cout<<"ENTER THE VALUE OF B: ";
	cin>>b;
	cout<<"ENTER THE VALUE OF C: ";
	cin>>c;
	if(a>b){
		if(a>c){
			high=a;
		}
		else{
			high=c;
		}
	}
	else{
		if(b>c){
			high=b;
		}
		else{
			high=c;
		}
	}
	
	cout<<"HIGH: "<<high;
	
	if(a<high && a>b){
		if(a>c){
			med=a;
		}
		else{
			med=c;
		}
	}
	
	cout<<"MED: "<<med;
}
