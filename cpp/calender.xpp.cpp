#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int day;
	cout<<"ENTER NUMBER BETWEEN ( 1 - 7 ) : ";
	cin>>day;
	switch(day){
		case 1: cout<<"\nMONDAY";
		        break;
		        
		case 2: cout<<"\nTUESDAY";
		        break;
		
		case 3: cout<<"\nWEDNERSDAY";
		        break;
				
		case 4: cout<<"\nTHURSDAY";
		        break;
				
		case 5: cout<<"\nFRIDAY";
		        break;
				
		case 6: cout<<"\nSATURDAY";
		        break;
				
		case 7: cout<<"\nSUNDAY";
		        break;	
				
		default : cout<<"WRONG INPUT";
		        break;							        
	}
}  
