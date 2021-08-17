#include<iostream>
#include<conio.h>
#include<ctype.h>
using namespace std;
int main(){
	char c;
	cout<<"ENTER ANY CHARACTER: ";
	cin>>c;
	if(isalpha(c)){
		if(islower(c)){
			cout<<"ENTERED CHARACTER IS IN LOWERCASE";
		}
		else{
			cout<<"ENTERED CHARACTER IS IN UPPERCASE";
		}
	}
	else{
		cout<<"ENTERD CHARACTER IS NOT AN ALPHABET";
	}
}
