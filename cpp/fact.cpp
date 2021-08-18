#include<iostream>
#include<stdio.h>
using namespace std;

int fact(int no){
	int ans;
	if(no == 0){
		return 1;
	}
	else{
		ans = no * fact(no-1);
	}
	return ans;
}

int main(){
	int no;
	cout<<"ENTER THE NO: ";
	cin>>no;
	int ans;
	ans = fact(no);
	cout<<"FACTORIAL IS: "<<ans;
}


