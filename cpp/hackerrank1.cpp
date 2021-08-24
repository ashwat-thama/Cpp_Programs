#include <iostream>
#include <cstdio>
#include<string.h>
using namespace std;

int main() {
    // Complete the code.
    int a,b,i;
    cout<<"ENTER THE VALUE OF A: ";
    cin>>a;
    cout<<"ENTER THE VALUE OF B: ";
    cin>>b;
    char *str[10]={"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" ,     "eight" , "nine"};
   for(i=a;i<=b;i++){
       if(i>9){
           if(i%2==0){
               cout<<"EVEN\n";
           }
           else{
               cout<<"ODD\n";
           }
       }
       else{
           cout<<str[i]<<"\n";
       }

   }
    return 0;
}
