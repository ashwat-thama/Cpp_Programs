#include<iostream>
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
	
	cout<<"\nTHE UNSORTED ARRAY IS: ";
	for(int i=0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"\nTHE SORTED ARRAY IS: ";
	
	for(int i=0 ; i<size-1; i++){
		int flag = 0;
		for(int j=0 ; j<size-1-i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0){
			break;
		}
	}
	for(int i=0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
	
}
