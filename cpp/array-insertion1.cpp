#include<iostream>
using namespace std;
int main(){
	int arr[100],size,no,index,i;
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
	cin>>no;
	cout<<"ENTER THE INDEX OF INSERTION: ";
	cin>>index;
	
	for(i=size;i>=index;i--){
		arr[i]=arr[i-1];
	}
	cout<<"\nTHE NEW ARRAY IS: ";
	
	for(i=0;i<=size;i++){
		cout<<"\t"<<arr[i];
	}
}
