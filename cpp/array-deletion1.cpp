#include<iostream>
using namespace std;
int main(){
	int arr[100],i,pos,size;
	cout<<"ENTER THE SIZE OF ARRAY: ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT: ";
		cin>>arr[i];
	}
	cout<<"ENTER THE POS OF DELETE: ";
	cin>>pos;
	
	for(i=(pos-1);i<size-1;i++){
		arr[i]=arr[i+1];
	}
	
	cout<<"\nTHE NEW ARRAY WILL BE: ";
	
	for(i=0;i<size-1;i++){
		cout<<"\t"<<arr[i];
	}
}
