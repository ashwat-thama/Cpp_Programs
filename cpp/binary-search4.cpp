#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[100],size;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"ENTER THE "<<(i+1)<<" ELEMENT OF THE ARRAY: ";
		cin>>arr[i];
	}
	cout<<"\n\nTHE ARRAY YOU HAVE ENTERED IS: ";
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	int temp,flag=0;
	for(int i=0;i<size-1;i++){
		flag=0;
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0){
			break;
		}
	}
	cout<<"\nTHE SORTED ARRAY IS: ";
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	int no;
	cout<<"\nENTER THE NO YOU WANT TO SEARCH: ";
	cin>>no;
	int left=0;
	int right=size-1;
	int mid;
	while(left<=right){
		mid=(left+right)/2;
		if(arr[mid]==no){
			cout<<no<<" FOUND AT INDEX "<<mid;
			break;
		}
		else if(arr[mid]>no){
			right=mid-1;
		}
		else if(arr[mid]<no){
			left=mid+1;
		}
	}
	if(left>right){
		cout<<"NOT FOUND";
	}
}
