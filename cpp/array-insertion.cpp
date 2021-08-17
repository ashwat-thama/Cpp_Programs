#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[100],size,n,i,pos;
	cout<<"ENTER THE SIZE OF ARRAY: ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<"ELEMENT: ";
		cin>>arr[i];
	}	
	cout<<"\nTHE ARRAY YOU HAVE ENTERED IS: ";
	for(i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	cout<<"\nENTER THE NEW ELEMENT TO BE INSERTED: ";
	cin>>n;
	cout<<"ENTER THE POSITION OF INSERTION: ";
	cin>>pos;
	
	for(i=size;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	
	arr[pos-1]=n;
	cout<<"\nAFTER INSERTION: ";
	for(i=0;i<=size;i++){
		cout<<"\t"<<arr[i];
	}
}
