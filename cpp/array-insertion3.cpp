#include<iostream>
using namespace std;
int main(){
	int arr[100],size,no,i;
	cout<<"ENTER THE SIZE OF ARRAY: ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT: ";
		cin>>arr[i];
	}
	cout<<"\nENTER THE NEW ELEMENT: ";
	cin>>no;
	arr[size]=no;
	cout<<"\nTHE NEW ARRAY IS: ";
	for(i=0;i<=size;i++){
		cout<<"\t"<<arr[i];
	}
}
