#include<iostream>
#include<string>
using namespace std;

class stu{
	int rollno;
	string name;
	float perc;
	
	public:
		void initialize(void);
		void display (void);
		int marks(void);
		int roll(void);
};

void stu::initialize(){
	cout<<"\nENTER THE ROLL NO: ";
	cin>>rollno;
	cout<<"ENTER THE NAME: ";
	cin>>name;
	cout<<"ENTER PERCENTAGE: ";
	cin>>perc;
}

void stu::display(){
	cout<<"\nNAME: "<<name;
	cout<<"\nROLL NO: "<<rollno;
	cout<<"\nPERCENTAGE: "<<perc;
}

int stu::marks(){
	return perc;
}

int stu::roll(){
	return rollno;
}

int main(){
	stu student[10];
	float top=0;
	int no;
	for(int i=0;i<10;i++){
		cout<<"ENTER THE DETAILS OF STUDENT "<<(i+1)<<" : ";
		student[i].initialize();
	}
	
	for(int i=0;i<10;i++){
		if(student[i].marks()>top){
			top=student[i].marks();
		}
	}
	
	for(int i=0;i<10;i++){
		if(top==student[i].marks()){
			student[i].display();
		}
	}
	
	cout<<"\n\nENTER THE ROLL NO OF STUDENT YOU WANT TO SEARCH FOR: ";
	cin>>no;
	for(int i=0;i<10;i++){
		if(no==student[i].roll()){
			student[i].display();
		}
	}
}
