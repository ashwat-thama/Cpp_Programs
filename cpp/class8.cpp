#include<iostream>
#include<conio.h>
using namespace std;

class testmatch{
	int TestCode;
	char Description[100];
	int NoOfCandidates;
	int CentreReq;
	
	int cal_centre(void){
		CentreReq=(NoOfCandidates/100)+1;
		return CentreReq;
	}
	
	public:
		void getdata(void);
		void showdata(void);
};

void testmatch::getdata(){
	cout<<"ENTER THE TEST CODE: ";
	cin>>TestCode;
	cin.ignore();
	cout<<"ENTER THE DESCRIPTION: ";
	cin.getline(Description,100);
	cout<<"ENTER THE NO OF CANDIDATES APPEARING: ";
	cin>>NoOfCandidates;
	cal_centre();
}

void testmatch::showdata(){
	cout<<"\nTEST CODE: "<<TestCode;
	cout<<"\nDESCRIPTION: "<<Description;
	cout<<"\nCANDIDATES APPEARING: "<<NoOfCandidates;
	cout<<"\nCENTRES REQUIRED: "<<CentreReq; 
}

int main(){
	testmatch test1;
	test1.getdata();
	test1.showdata();
}
