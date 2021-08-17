#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,c,big,med,small,big1,med1,small1;
	big1=big;
	small1=small;
	med1=med;
	cout<<"ENTER THE FIRST NUMBER: ";
	cin>>a;
	cout<<"ENTER THE SECOND NUMBER: ";
	cin>>b;
	cout<<"ENTER THE THIRD NUMBER: ";
	cin>>c;
	if(a>b){
		if(a>c){
			big=a;
		}
		else{
			big=c;
		}
	}
	else{
		if(b>c){
			big=b;
		}
		else{
			big=c;
		}
	}
	
	if(big1==a){
		if(b>c){
			med=b;
		}
		else{
			med=c;
		}
	}
	else if(big1==b){
		if(a>c){
			med=a;
		}
		else{
			med=c;
		}
	}
	
	else if(big1==c){
		if(a>b){
			med=a;
		}
		else{
			med=b;
		}
	}
	
	if(med1==a){
		if(b>c){
			small=b;
		}
		else{
			small=c;
		}
	}
	else if(med1==b){
		if(a>c){
			small=a;
		}
		else{
			small=c;
		}
	}
	
	else if(med1==c){
		if(a>b){
			small=a;
		}
		else{
			small=b;
		}
	}
	cout<<"\nBIG: "<<big;
	cout<<"\nMED: "<<med;
	cout<<"\nSMALL: "<<small;
}
