#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int m,n,i;
	int a[m],b[n],c[m+n];
	cout<<"ENTER THE SIZE OF ARRAY 1: ";
	cin>>m;
	cout<<"ENTER THE SIZE OF ARRAY 2: ";
	cin>>n;
	cout<<"ENTER THE ELEMENTS OF ARRAY 1: ";
	for(i=0;i<m;i++){
		cin>>a[i];
	}
	cout<<"ENTER THE ELEMENTS OF ARRAY 2: ";
	for(i=0;i<n;i++){
		cin>>b[n];
	}
	cout<<"NOW THE 3RD ARRAY IS: ";
	for(i=0;i<(m+n);i++){
		c[i]=a[i]+b[i];
		cout<<"\t"<<c[i];
	}
}
