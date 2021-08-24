#include<iostream>
#include<string>
#include<stack>
using namespace std;

int prec(char c){
	if(c == '^'){
		return 3;
	}
	
	else if(c == '*' || c == '/'){
		return 2;
	}
	
	else if(c == '+' || c == '-'){
		return 1;
	}
	
	else{
		return 0;
	}
}

void InfixToPostfix(string str){
	stack<char> oper;
	oper.push('N');
	int l = str.length();
	string newstr;
	for(int i=0 ; i<l ; i++){
		// if scaned character is and operand
		if(isalpha(str[i]) || isdigit(str[i])){
			newstr+=str[i]; 
		}
		
		//if scaned character is ( then push it in the stack
		//if scaned character is ) the pop the elements of the stack until top != (
		else if(str[i] == '('){
			oper.push('(');
		}
		
		else if(str[i] == ')'){
			while(oper.top() != 'N' && oper.top() != '('){
				newstr+=oper.top();
				oper.pop();
			}
			if(oper.top() == '('){
				oper.pop();
			}
		}
		
		else{
			while(oper.top() != 'N' && prec (str[i]) <= prec (oper.top())){
				newstr+=oper.top();
				oper.pop();
			}
			oper.push(str[i]);
		}
	}
	
	//now we have to pop the remaining element from the stack
	while(oper.top() != 'N'){
		newstr+=oper.top();
		oper.pop();
	}
	
	cout<<newstr;
	
}

int main(){
	string exp = "a+b-c+(d*e/f)-g*h"; 
	InfixToPostfix(exp);
	return 0;
}

