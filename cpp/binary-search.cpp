#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[10],mid,size,left=0,right=4;
	//cout<<"ENTER THE SIZE Of ARRAY: ";
	//cin>>size;
	//left=0;
	//right=size-1;
	for(int i=0;i<5;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT OF THE ARRAY: ";
		cin>>arr[i];
	}
	int no,loc;
	cout<<"ENTER THE NO YOU WANT TO SEARCH: ";
	cin>>no;
	mid=(left+right)/2;
	do{
		
		if(arr[mid]==no){
			loc=mid;
			cout<<"FOUND AT INDEX: "<<loc;
			break;
		}
		else if(arr[mid]<no){
			left=mid+1;
		}
		else if(arr[mid]>no){
			right=mid-1;
		}
		
		mid=(left+right)/2;
		
	}while(left<=right);
	if(left>right){
		cout<<"\nNOT FOUND";
	}
}
