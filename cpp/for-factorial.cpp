#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,i;
	cout<<"ENTER THE VALUE OF N: ";
	cin>>n;
	int fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	cout<<"FACTORIAL : "<<fact;
}
