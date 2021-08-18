#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[4][4],i,j,rs=0,cs=0;
	cout<<"ENTER YOUR ARRAY: ";
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"THE ARRAY YOU HAVE ENTERED IS: \n";
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cout<<"\t"<<arr[i][j];
		}
		cout<<"\n";
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cs+=arr[i][j];
		}
		cout<<"\nSUM OF COLUMN "<<(i+1)<<" IS: "<<cs;
		cs=0;
	}
	for(j=0;j<4;j++){
		for(i=0;i<4;i++){
			rs+=arr[i][j];
		}
		cout<<"\nSUM OF ROW "<<(j+1)<<" IS: "<<rs;
			rs=0;
	}
}
