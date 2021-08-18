#include<iostream>
#include<conio.h>
using namespace std;
class cabs{
	int cno;
	char type;
	int pkm;
	float distance;
	
	public:
		cabs(){
			cno=1111;
			type='a';
		}
		
		void charges(void){
			if(type=='a'){
				pkm=25;
			}
			else if(type=='b'){
				pkm=20;
			}
			else if(type=='c'){
				pkm=15;
			}
		}
		
		void getdata(void){
			cout<<"ENTER CAB NO: ";
			cin>>cno;
			cin.ignore();
			cout<<"ENTER CAB TYPE: ";
			cin>>type;
			cout<<"ENTER DISTANCE TRAVELED: ";
			cin>>distance;
			charges();
		}
		
		void showdata(void){
			cout<<"\n\nCAB NO: "<<cno;
			cout<<"\nCAB TYPE: "<<type;
			cout<<"\nCAB DISTANCE: "<<distance;
			cout<<"\nCHARGE PER KM: "<<pkm;
		}
};
int main(){
	cabs cab1;
	cab1.charges();
	cab1.getdata();
	cab1.showdata();
}
