#include<iostream>
using namespace std;

//--------------------------------BUBBLE SORTING------------------------------------//
void bubblesort(int arr[] , int size){
	for(int i=0 ; i<size ; i++){
		int flag = 0;
		for(int j=0 ; j<size-i-1 ; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0){
			break;
		}
	}
	
	for(int i=0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
}


//------------------------------------INSERTION SORTING------------------------------------//
void insertionsort (int arr[] , int size){
	for(int i=1 ; i<size ; i++){
		int temp = arr[i];
		int j = i-1;
		
		while(j>=0 && arr[j]>temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	
	for(int i=0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
}

//------------------------------------SELECTION SORTING------------------------------------//
void selectionsort(int arr[] , int size){
	for(int i=0 ; i<size ; i++){
		int min = i;
		for(int j=i+1 ; j<size ; j++){
			if(arr[min] > arr[j]){
				min = j;
			}
		}
		if(min != i){
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	
	for(int i=0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
} 

//------------------------------------MERGE SORT-----------------------------------------//
void merge(int arr[] , int start , int end){
	int mid = (start + end)/2;
	int i = start;
	int j = mid+1;
	int k = start;
	int temp[100];
	
	while(i <= mid  &&  j <= end){
		if(arr[i] <= arr[j]){
			temp[k] = arr[i];
			i++;
			k++;
		}
		else if(arr[j] < arr[i]){
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	while(i <= mid){
		temp[k] = arr[i];
		k++;
		i++;
	}
	while(j <= end){
		temp[k] = arr[j];
		k++;
		j++;
	}
	
	for(int i=0 ; i<=end ; i++){
		arr[i] = temp[i];
	}
}

void mergesort(int arr[] , int start , int end){
	if(start >= end){
		return;
	}
	int mid = (start + end)/2;
	mergesort(arr , start , mid);
	mergesort(arr , mid+1 , end);
	merge(arr , start , end);
	for(int i=0 ; i<=end ; i++){
		cout<<arr[i]<<" ";
	}
}

//-------------------------------------M . A . I . N -----------------------------------//
int main(){
	int size;
	cout<<"ENTER THE SIZE OF THE ARRAY: ";
	cin>>size;
	int arr[size];
	for(int i=0 ; i<size ; i++){
		cout<<"ENTER THE "<<i+1<<" ELEMENT: ";
		cin>>arr[i];
	}
	
	cout<<"\n 1. BUBBLE SORT";
	cout<<"\n 2. INSERTION SORT";
	cout<<"\n 3. SELECTION SORT";
	cout<<"\n 4. MERGE SORT";
	
	int ch;
	cout<<"\nENTER YOUR CHOICE: ";
	cin>>ch;
	switch(ch){
		case 1: bubblesort(arr , size);
				break;
				
		case 2: insertionsort(arr , size);
				break;
				
		case 3: selectionsort(arr , size);
				break;
				
		case 4: mergesort(arr , 0 , size-1);
				break;
				
		default: cout<<"\nDEFAULT";
				break;						
	}
}
