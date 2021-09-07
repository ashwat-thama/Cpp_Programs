#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char ch){
	if(ch == '^'){
		return 3;
	}
	
	else if(ch == '*' || ch == '/'){
		return 2;
	}
	
	else if(ch == '+' || ch == '-'){
		return 1;
	}
	
	else{
		return 0;
	}
}

string InfixToPostfix(string str){
	int l = str.length();
	stack <char> oper;
	string newstr;
	oper.push('N');
	
	for(int i=0 ; i<l ; i++){
		if(isalpha(str[i]) || isdigit(str[i])){
			newstr+=str[i];
		}
		
		else if(str[i] == '('){
			oper.push(str[i]);
			
		}
		
		else if(str[i] == ')'){
			while(oper.top() != 'N' && oper.top() != '('){
				newstr += oper.top();
				oper.pop();
			}
			if(oper.top() == '('){
				oper.pop();
			}
		}
		
		else{
			while(oper.top() != 'N' && prec(str[i]) <= prec(oper.top())){
				newstr += oper.top();
				oper.pop();
			}
			oper.push(str[i]);
		}
	}
	while(oper.top() != 'N'){
		newstr += oper.top();
		oper.pop();
	}
	
	return newstr;
}

void InfixToPrefix(string infix){
	reverse(infix.begin() , infix.end());
	int l = infix.length();
	for(int i=0 ; i<l ; i++){
		if(infix[i] == '('){
			infix[i] = ')';
		}
		else if(infix[i] == ')'){
			infix[i] = '(';
		}
	}
	string postfix = InfixToPostfix(infix);
	reverse(postfix.begin() , postfix.end());
	cout<<postfix;
}

int main(){
	string exp = "a+b+c*(d+e-f)/g-h*i";
	InfixToPrefix(exp);
}
