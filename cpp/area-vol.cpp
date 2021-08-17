#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	float Tarea,base,height,Cradius,Carea,pi=3.14,Svol,Sarea,Sradius;
	cout<<"ENTER THE HEIGHT OF TRIANGLE: ";
	cin>>height;
	cout<<"ENTER THE BASE OF THE TRIANGLE: ";
	cin>>base;
	Tarea=0.5*base*height;
	cout<<"THE ATRE OF TRIANGLE IS: "<<Tarea;
	
	cout<<"\nENTER THE AREA OF THE CIRCLE: ";
	cin>>Carea;
	Cradius=sqrt(pi/Carea);
	cout<<"\nTHE RADIUS OF THE CIRCLE IS: "<<Cradius;
	
	cout<<"\nENTER THE RADIUS OF THE SPHERE: ";
	cin>>Sradius;
	Svol=(4/3)*pi*Sradius*Sradius*Sradius;
	Sarea=4*pi*Sradius*Sradius;
	cout<<"\nAREA OF SPHERE: "<<Svol;
	cout<<"\nVOLUME OF SPHERE: "<<Sarea;
}
