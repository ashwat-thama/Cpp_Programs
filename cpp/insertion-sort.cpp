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
	for(int i=0;i<size;i++){
		int temp = arr[i];
		int j=i-1;
		while(arr[j]>temp && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	cout<<"\n\nTHE SORTED ARRAY IS: ";
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
}
