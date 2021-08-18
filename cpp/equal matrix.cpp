#include<iostream>
using namespace std;
void equal(int arr1[3][3] , int arr2[3][3]){
	int flag;
for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ;j++){
			if(arr1[i][j] == arr2[i][j]){
				flag = 0;
			}
			else{
				flag = 1;
			}	
		}
		if(flag == 0){
			cout<<"\nEQUAL ARRAY";
			break;
		}
		else{
			cout<<"\nUNEQUAL ARRAY";
			break;
		}
	}
}
int main(){
	int arr1[3][3],arr2[3][3];
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"\n\n";
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			cin>>arr2[i][j];
		}
	}
	
	cout<<"\n\n";
	for(int i=0 ; i<3 ;i++){
		for(int j=0 ; j<3 ; j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<"\n";
	}	
	cout<<"\n\n";
	for(int i=0 ; i<3 ;i++){
		for(int j=0 ; j<3 ; j++){
			cout<<arr2[i][j]<<" ";
		}
		cout<<"\n";
	}	
	equal(arr1 , arr2);
}
