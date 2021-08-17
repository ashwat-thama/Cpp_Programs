#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr1[3][3],arr2[3][3],arr3[3][3],i,j;
	cout<<"\nENTER THE ELEMENTS OF MATRIX 1: ";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"\nTHE MATRIX 1 YOU HAVE ENTERED IS: \n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"\t"<<arr1[i][j];
		}
		cout<<"\n";
	}
	cout<<"\nENTER THE ELEMENTS OF MATRIX 2: ";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr2[i][j];
		}
	}
	cout<<"\nTHE MATRIX 2 YOU HAVE ENTERED IS: \n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"\t"<<arr2[i][j];
		}
		cout<<"\n";
	}
	cout<<"THE SUM OF THE TWO MATRIX IS: \n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			cout<<"\t"<<arr3[i][j];
		}
		cout<<"\n";
	}
}
