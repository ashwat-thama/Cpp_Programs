#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,c,big,med,low;
	cout<<"ENTER THE VALUE OF A: ";
	cin>>a;
	cout<<"ENTER THE VALUE OF B: ";
	cin>>b;
	cout<<"ENTER THE VALUE OF C: ";
	cin>>c;
	big=a;
	if(b>big){
		if(b>c){
			big=b;
		}
		else{
			big=c;
		}
	}
	if(big==a){
		if(b>c){
			med=b;
			low=c;
		}
		else{
			med=c;
			low=b;
		}
	}
	else if(big==b){
		if(a>c){
			med=a;
			low=c;
		}
		else{
			med=c;
			low=a;
		}
	}
	else if(big==c){
		if(a>b){
			med=a;
			low=b;
		}
		else{
			med=b;
			low=a;
		}
	}
	cout<<"\nBIG: "<<big;
	cout<<"\nMED: "<<med;
	cout<<"\nLOW: "<<low;
} 
