#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int r,c,i,j;
	cout<<"ENTER THE NUMBER OF ROWS: ";
	cin>>r;
	cout<<"ENTER THE NUMBER OF COLUMNS: ";
	cin>>c;
	cout<<"ENTER YOUR ARRAY: \n";
	int arr[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"\t"<<arr[i][j];
		}
		cout<<"\n";
	}
	cout<<"THE ARRAY ELEMENTS WHICH ARE DEVISIBLE BY 100 ARE: ";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(arr[i][j]%100==0){
				cout<<"\t"<<arr[i][j];
			}
		}
	}
}
