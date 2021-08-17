#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int size,big=0;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	int arr1[size],i;
	for(i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT OF ARRAY: ";
		cin>>arr1[i];
		if(arr1[i]>big){
			big=arr1[i];
		}
	}
	cout<<"BIGGEST ELEMENT: "<<big;
}
