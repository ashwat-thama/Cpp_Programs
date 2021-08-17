#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char str1[50],str2[50];
	cout<<"ENTER STRING 1: ";
	cin.getline(str1,50);
	cout<<"ENTER STRING 2: ";
	cin.getline(str2,50);
	if(strlen(str1)>strlen(str2)){
		cout<<"STRING 1 IS BIGGER";
	}
	else if(strlen(str2)>strlen(str1)){
		cout<<"STRING 2 IS BIGGER";
	}
	else{
		cout<<"EQUAL";
	}
}
