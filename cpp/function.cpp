#include<iostream>
using namespace std;

int alpha(char a , char b){
	int one = a;
	int two = b;
	if(one == two){
		return 0;
	}
	
	else if(one < two){
		return -1;
	}
	
	else{
		return 1;
	}
}

int main(){
	int num;
	num = alpha('b' , 'a');
	cout<<num;
}
