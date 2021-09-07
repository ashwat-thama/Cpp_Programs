#include<iostream>
#include<conio.h>
#include<ctype.h>
using namespace std;
int main(){
	char c;
	cout<<"ENTER ANY CHARACTER: ";
	cin>>c;
	if(isalnum(c)){
		cout<<"THE ENTERD IS AN ALPHANUM";
	}
	else{
		cout<<"THE ENTERED IS NOT AN ALPHANUM";
	}
}
