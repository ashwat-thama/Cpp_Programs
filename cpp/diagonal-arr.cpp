#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int r,c,i,j,diagonal1,diagonal2;
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
	if(r==c){
		cout<<"THE OF THE 2 DIAGONALS ARE: ";
		for(i=0;i<r;i++){
			diagonal1+=arr[i][i];
		}
		for(i=0,j=c;i<r;j--,i++){
			diagonal2+=arr[i][j];
		}
		cout<<"\nDIAGONAL1: "<<diagonal1;
		cout<<"\nDIAGONAL2: "<<diagonal2;
	}
}
