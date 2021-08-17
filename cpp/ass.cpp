#include<iostream>
using namespace std;
class base{
	public:
		void show(){
			cout<<"BASE CLASS SHOW";
		}
		virtual void display(){
			cout<<"BASE CLASS DISPLAY";
		}
};

class derived:public base{
	public:
		void show(){
			cout<<"SHOW FROM DERIVED CLASS";
		}
		void display(){
			cout<<"DERIVED CLASS DISPLAY\n";
		}
};

int main(){
	base *ptr;
	derived d;
	ptr = &d;
	ptr->display();
	ptr->show();
	return 0;
}
