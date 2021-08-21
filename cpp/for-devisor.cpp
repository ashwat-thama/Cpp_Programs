#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num,i;
	cout<<"ENTER THE VALUE OF N : ";
	cin>>num;
	for(i=1;i<=100;i++){
		if(num%i==0){
			cout<<"\nDEVISOR OF "<<num<<" IS : "<<i;
		}
	}
}


