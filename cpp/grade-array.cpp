#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int grade[4][3],i,j,marks,avg;
	for(i=0;i<4;i++){
		cout<<"\nENTER MARKS OF "<<(i+1)<<" STUDENT: ";
		for(j=0;j<3;j++){
			cout<<"\nENTER MARKS SCORED IS SUB "<<(j+1)<<" : ";
			cin>>grade[i][j];
			marks+=grade[i][j];
			avg=marks/3;
		}
		cout<<"\nAVERAGE: "<<avg<<"\n";
		if(avg>90){
			cout<<"GRADE: A ";
		}
		else if(avg>70 && avg<90){
			cout<<"GRADE: B ";
		}
		else if(avg>50 && avg<70){
			cout<<"GRADE: C";
		}
		else if(avg>33 && avg<50){
			cout<<"GRADE: D";
		}
		else{
			cout<<"FAIL";
		}
	}
}
