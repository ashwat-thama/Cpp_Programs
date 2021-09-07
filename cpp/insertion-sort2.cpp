#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[100],size;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENET OF THE ARRAY: ";
		cin>>arr[i];
	}
	cout<<"THE ARRAY YOU HAVE ENTERED IS: ";
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	cout<<"\n\n-----------------INSERTION SORT-------------------";
	int temp;
	int j;
	for(int i=1;i<size;i++){
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
}
