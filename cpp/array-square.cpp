#include<iostream>
using namespace std;
int main(){
	int arr[4][4];
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"\nTHE ARRAY YOU HAVE ENTERED IS: "<<"\n";
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=0 ;i<4 ;i++){
		for(int j=0 ;j<4 ;j++){
			arr[i][j]*=arr[i][j];
		}
	}
	
	cout<<"\n\n\n";
		for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}
