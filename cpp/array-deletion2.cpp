#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[100],size,pos,i;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT OF ARRAY: ";
		cin>>arr[i];
	}
	cout<<"\nTHE ARRAY YOU HAVE ENTERED IS: ";
	for(i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	cout<<"\nENTER THE POSITION OF DELETE: ";
	cin>>pos;
	for(i=pos;i<=size-1;i++){
		arr[i]=arr[i+1];
	}
	cout<<"\nTHE NEW ARRAY IS: ";
	for(i=0;i<size-1;i++){
		cout<<"\t"<<arr[i];
	}
}
