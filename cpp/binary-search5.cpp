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
	cout<<"\nENTER THE NO YOU WNAT TO SEARCH: ";
	cin>>no;
	int left = 0;
	int right = size-1;
	
	while(left<=right){
		int mid = (left+right)/2;
		
		if(arr[mid] == no){
			cout<<"\nFOUND AT LOC: "<<mid;
			break;
		}
		
		else if(arr[mid] < no){
			left = mid+1;
		}
		
		else if(arr[mid] > no){
			right = mid-1;
		}
	}
	
	if(left>right){
		cout<<"\nNOT FOUND";
	}
}
