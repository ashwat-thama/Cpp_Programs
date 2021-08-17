#include<iostream>
#include<conio.h>
void big(int , int);
using namespace std;
int main(){
	int size,arr1[size],i;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"\nENTER THE "<<(i+1)<<" ELEMENT OF ARRAY: ";
		cin>>arr1[i];
	}
	big(arr1[size],size);
}
int big(int arr1[],int size){
	int biger=0;
	int i;
	for(i=0;i<size;i++){
		if(arr1[i]>biger){
			biger=arr1[i];
		}
	}
	cout<<biger;
	return 1;
}
