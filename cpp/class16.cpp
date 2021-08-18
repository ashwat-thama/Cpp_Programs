#include<iostream>
using namespace std;
class string{
	public:
	int size;
	char str[size];
	void input(void);
	void display(void);
	void reverse(void);
};
string str1;

void string::input(){
	cout<<"ENTER THE SIZE OF THE STRING: ";
	cin>>str1.size;
	cout<<"ENTER THE STRING: ";
	puts(str1.str);
}

void str1::reverse(void){
	char str2[str1.size];
	int j = 0;
	for(int i=0 ; i<str1.size ; i++){
		str2[j] = str[i];
		j++;
	}
}

void string::display(void){
	cout<<"\nSIZE OF THE STRING: "<<str1.size;
	cout<<"\nSTRING YOU HAVE ENTERED: "<<puts(str1.str);
	cout<<"\nREVERSE: ";
	for(int i=0 ; i<str1.size ; i++){
		cout<<str2;
	}
}

int main(){
	input();
	reverse();
	display();
}

