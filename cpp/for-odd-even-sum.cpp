#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,i;
	int sum_even=0;
	int sum_odd=0;
	cout<<"ENTER THE VALUE OF N: ";
	cin>>n;
	for(i=0;i<=n;i=i+2){
		sum_even+=i;
	}
	cout<<"EVEN NO's SUM: "<<sum_even;
	
	for(i=1;i<=n;i=i+2){
		sum_odd+=i;
	}
	cout<<"\nODD NO's SUM: "<<sum_odd;
}
