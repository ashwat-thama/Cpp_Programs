#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,i;
	int sum=0;
	cout<<"ENTER THE VALUE OF N : ";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"\t"<<i;
		sum+=i;
	}
	
	cout<<"\nTHE SUM OF N NUMBERS IS: "<<sum;
}
