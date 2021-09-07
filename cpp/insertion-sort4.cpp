#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int size;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	int arr[size];
	for(int i=0 ; i<size ; i++){
		cout<<"ENTER THE "<<i+1<<" ELEMENT OF THE ARRAY: ";
		cin>>arr[i];
	}
	cout<<"\nTHE ARRAY YOU HAVE ENTERED IS: ";
	for(int i=0 ; i<size ; i++){
		cout<<arr[i]<<"  ";
	}
	
	cout<<"\nAPPLYING INSERTION SORT: ";
	
	for(int i=1 ; i<size ; i++){
		int current = arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>current){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1] = current;
	}
	
		cout<<"\nTHE SORTED ARRAY IS: ";
		for(int i=0 ; i<size ; i++){
			cout<<arr[i]<<"  ";
		}
}
