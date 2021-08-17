#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int size,i,j,below=0,above=0;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	int arr[size][size];
	cout<<"ENTER THE ELEMENTS OF THE ARRAY 1: \n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"\nTHE ARRAY YOU HAVE ENTERED IS: \n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			cout<<"\t"<<arr[i][j];
		}
		cout<<"\n";
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(i>j){
				below+=below+arr[i][j];
			}
		}
	}
	cout<<"\nTHE SUM OF NUMBER ABOVE THE DIAGONAL: "<<above;
	cout<<"\nTHE SUM OF NUMBER BELOW THE DIAGONAL: "<<below;
}

