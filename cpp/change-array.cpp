#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10],i,n=0;
	cout<<"ENTER THE ELEMENTS OF ARRAY: ";
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<"THE ARRAY YOU HAVE ENTERED IS: ";
	for(i=0;i<10;i++){
		cout<<"\t"<<a[i];
		if(a[i]=='\0'){
			n++;
			cout<<n;
		}
	}
}
