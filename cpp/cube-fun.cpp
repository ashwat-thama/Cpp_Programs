#include<iostream>
#include<conio.h>
using namespace std;
int cube(int);
int main(){
	int n,ans;
	cout<<"ENTER THE NUMBER: ";
	cin>>n;
	ans=cube(n);
	cout<<"CUBE : "<<ans;
}
int cube(int x){
	int cube;
	cube=x*x*x;
	return cube;
}
