#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int first=0,second=1,third,n;
	cout<<first<<"\t"<<second;
	for(n=1;n<=10;n++){
		third=first+second;
		cout<<"\t"<<third;
		first=second;
		second=third;
	}
}
