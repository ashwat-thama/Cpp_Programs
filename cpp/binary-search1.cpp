#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[50],size;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"ENTER THE "<<(1+i)<<" ELEMENT OF THE ARRAY: ";
		cin>>arr[i];
	}
	int no;
	cout<<"\n\nENTER THE NO YOU WANT TO SEARCH: ";
	cin>>no;
	int left=0;
	int right=size-1;
	int mid=(left+right)/2;
	while(right>=left){
		if(arr[mid]==no){
			cout<<"\n"<<no<<" FOUND AT INDEX "<<mid;
			break;
		}
		else if(arr[mid]>no){
			right=mid-1;
		}
		else if(arr[mid]<no){
			left=mid+1;
		}
		
		mid=(left+right)/2;
		
	}
	if(right<left){
		cout<<"NOT FOUND";
	}
}
