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
	cout<<"\n\nTHE ARRAY YOU HAVE ENTERED IS: ";
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	cout<<"\n\n---------------APPLYING INSERTION SORT-----------------";
	for(int i=1;i<size;i++){
		int temp = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	
	cout<<"\n\nTHE SORTED ARRAY IS: ";
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
}
