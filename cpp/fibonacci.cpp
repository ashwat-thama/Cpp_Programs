#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,first,second,third,n;
	first=0;
	second=1;
	cout<<"ENTER THE NUMBER OF TERMS: ";
	cin>>n;
	cout<<first<<"\t";
	cout<<second<<"\t";
	for(i=2;i<=n;i++){
		third=first+second;
		cout<<third<<"\t";
		first=second;
		second=third;
	}
}
