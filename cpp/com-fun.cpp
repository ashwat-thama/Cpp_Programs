#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int com(string,string);
int main(){
	string str1,str2;
	int ans;
	cout<<"ENTER THE STRING 1: ";
	getline(cin,str1);
	cout<<"ENTER THE STRING 2: ";
	getline(cin,str2);
	ans=com(str1,str2);
	cout<<ans;
}
int com(string x , string y){
	if(x.length()==y.length()){
		return 0;
	}
	else{
		return -1;
	}
}
