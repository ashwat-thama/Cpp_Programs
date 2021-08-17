#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[15];
	for(int i=0;i<15;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT OF ARRAY: ";
		cin>>arr[i];
	}
	for(int i=0;i<15;i++){
		cout<<"\t"<<arr[i];
	}
	int temp;
	for(int i=0;i<14;i++){
		for(int j=0;j<14;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}	
	}
	for(int i=0;i<15;i++){
		cout<<"\t"<<arr[i];
	}
}
