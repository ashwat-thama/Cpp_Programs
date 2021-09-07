#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[100],size;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT OF THE ARRAY: ";
		cin>>arr[i];
	}
	cout<<"\n\nPERFORMING INSERRTION SORT: ";
	for(int i=1;i<size;i++){
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	cout<<"\n\nPPERFORMING BUBBLE SORT: ";
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
}
