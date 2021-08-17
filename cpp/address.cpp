#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT OF ARRAY: ";
		cin>>arr[i];
	}
	int no,loc,flag=0;
	cout<<"ENTER THE NO YOU WANT TO SEARCH: ";
	cin>>no;
	for(int i=0;i<10;i++){
		if(no==arr[i]){
			loc=i;
			cout<<"\nNO IS FOUND AT INDEX: "<<loc;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"\nNOT FOUND";
	}
}
