#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float x , ans;
	cout<<"f(x)=((x^2+(1.5*x)+5)/(x-3))"
	<<"\nX = (-10 to 10)";
	for(x=-10;x<=10;x=x+2){
		ans=((x*x+(1.5*x)+5)/(x-3));
		cout<<"\nf("<<x<<") : "<<ans;
	}
}
