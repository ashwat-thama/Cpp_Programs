#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[100],size;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT FO THE ARRAY: ";
		cin>>arr[i];
	}
	cout<<"\n\nTHE ARRAY YOU HAVE ENTERED IS: ";
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	int temp,flag;
	for(int i=0;i<size-1;i++){
		flag = 0;
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag = 1;
			}
		}
		if(flag==0){
			break;
		}
	}
	cout<<"\nTHE SORTTED ARRAY IS: ";
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
}
