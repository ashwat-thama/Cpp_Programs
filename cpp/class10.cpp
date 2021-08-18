#include<iostream>
#include<conio.h>
using namespace std;

class library{
	int bookno;
	char bookname[30];
	char author[30];
	char publisher[30];
	float price;
	int copies;
	int issued;
	
	public:
		void getdata(void);
		void showdata(void);
		int getbook(void){
			return bookno;
		}
};

void library::getdata(){
	cout<<"ENTER THE BOOK NO: ";
	cin>>bookno;
	cin.ignore();
	cout<<"ENTER BOOK NAME: ";
	cin.getline(bookname,30);
	cout<<"ENTER THE NAME OF AUTHOR: ";
	cin.getline(author,30);
	cout<<"ENTER THE NAME OF PUBLISHER: ";
	cin.getline(publisher,30);
	cout<<"ENTER THE PRICE OF THE BOOK: ";
	cin>>price;
	cout<<"ENTER THE NO PF COPIES AVAILABLE: ";
	cin>>copies;
	cout<<"ENTER THE NO OF BOOKS ISSUED: ";
	cin>>issued;
}

void library::showdata(){
	cout<<"\nBOOK NO: "<<bookno;
	cout<<"\nBOOK NAME: "<<bookname;
	cout<<"\nAUTHOR OF BOOK: "<<author;
	cout<<"\nNAME OF PUBLISHER: "<<publisher;
	cout<<"\nBOOK PRICE: "<<price;
	cout<<"\nNO OF COPIES AVAILABLE: "<<copies;
	cout<<"\nNO OF BOOKS ISSUED: "<<issued;
}

int main(){
	library books[5];
	int i,n;
	for(i=0;i<5;i++){
		books[i].getdata();
	}
	
	cout<<"ENTER THE NO. OF BOOK YOU WANT TO GET INFO OF: ";
	cin>>n;
	
	for(i=0;i<5;i++){
		if(n==books[i].getbook()){
			books[i].showdata();
		}
	}
}
