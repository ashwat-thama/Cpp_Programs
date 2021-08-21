#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,i;
	int ans=0;
	cout<<"ENTER THE NUMBER: ";
	cin>>n;
	for(i=1;i<=10;i++){
		ans=i*n;
		cout<<i<<"*"<<n<<": "<<ans<<"\n";
	}
}
