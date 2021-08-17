#include<iostream>
using namespace std;
int main(){
	int arr[100],i,no,pos,size;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT: ";
		cin>>arr[i];
	}
	cout<<"\nTHE ARRAY YOU HAVE ENTERED IS: ";
	for(i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	cout<<"\nENTER THE POS OF NO YOU WANT TO DELETE: ";
	cin>>pos;
	
	for(i=(pos-1);i<size-1;i++){
		arr[i]=arr[i+1];
	} 
	
	cout<<"THE NEW ARRAY IS: ";
	for(i=0;i<size-1;i++){
		cout<<"\t"<<arr[i];
	}
}
