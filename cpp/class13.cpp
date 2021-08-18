#include<iostream>
#include<conio.h>
using namespace std;

class play{
	private:
		int playcode;
		char playtitle[30];
		float duration;
		int characters;
		
		public:
			play(){
				duration=45;
				characters=5;
			}
			
			void newplay(void){
				cout<<"ENTER THE PLAY CODE: ";
				cin>>playcode;
				cin.ignore();
				cout<<"ENTER THE PLAY TITLE: ";
				cin.getline(playtitle,30);
			}
			
			void moreinfo(int a , float b){
				characters=a;
				duration=b;
			}
			
			void showplay(void){
				cout<<"\n\nTHE PLAY CODE IS: "<<playcode;
				cout<<"\nTHE TITLE OF THE PLAY IS: "<<playtitle;
				cout<<"\nTHE DURATION OF THE PLAY: "<<duration;
				cout<<"\nNO OF CHARACTERS IN THE PLAY: "<<characters;
			}
};
int main(){
	play play1;
	int i;
	float j;
	cout<<"ENTER THE NO OF CHARACTERS: ";
	cin>>i;
	cout<<"ENTER THE DURATION OF THE PLAY: ";
	cin>>j;
	play1.newplay();
	play1.moreinfo(i,j);
	play1.showplay();
	
}
