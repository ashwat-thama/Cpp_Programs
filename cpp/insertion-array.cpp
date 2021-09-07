#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int size;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	
	int arr[size];
	
	for(int i=0 ; i<size ; i++){
		cout<<"ENTER THE "<<i+1<<" ELEMENT: ";
		cin>>arr[i];
	}
	
	cout<<"\nTHE ARRAY YOU HAVE ENTERED IS: ";
	for(int i=0 ; i<size ; i++){
		cout<<arr[i]<<"\t";
	}
	
	int no;
	int pos;
	
	cout<<"\nENTER THE NO YOU WANT TO ENTER: ";
	cin>>no;
	cout<<"ENTER THE POS AT WHICH YOU WANT TO INSERT: ";
	cin>>pos;
	
	for(int i=size ; i>=pos ; i--){
		arr[i] = arr[i-1];
	}
	
	arr[pos] = no;
	
	cout<<"\nTHE ARRAY YOU HAVE ENTERED IS: ";
	for(int i=0 ; i<size+1 ; i++){
		cout<<arr[i]<<"\t";
	}
}
