#include<iostream>
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
	int left = 0;
	int right = size-1;
	int no;
	cout<<"ENTER THE NO FOR SEARCHING: ";
	cin>>no;
	
	while(left <= right){
		int mid = (left + right)/2;
		if(arr[mid] == no){
			cout<<"FOUND AT LOC: "<<mid+1;
			break;
		}
		else if(arr[mid] < no){
			left = mid+1;
		}
		else if(arr[mid] > no){
			right = mid-1;
		}
	}
	if(left > right){
		cout<<"NOT FOUND";
	}
}
