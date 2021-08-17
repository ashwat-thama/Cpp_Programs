#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[100],size,pos,no,i;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT OF ARRAY: ";
		cin>>arr[i];
	}
	cout<<"\nTHE ARRAY YOU HAVE ENTERED IS: ";
	for(i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	cout<<"\n\nENTER THE NO YOU WANNA INSERT: ";
	cin>>no;
	cout<<"ENTER THE POSITION OF INSERTION: ";
	cin>>pos;
	for(i=size;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=no;
	cout<<"\nTHE NEW ARRAY IS: ";
	for(i=0;i<=size;i++){
		cout<<"\t"<<arr[i];
	}
}
