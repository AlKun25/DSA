#include <iostream>
#include <stack>
using namespace std;

int main()
{	
	stack <int> s;
	// push - inserting elements 1,2 & 3 in stack 
	s.push(1);
	s.push(2);
	s.push(3);
	
	// pop - deleting the element at top
	s.pop();
	
	// Display element at the top
	cout<<"ELement at the top is: "<<s.top()<<endl;
	// To check if stack is empty or not
	cout<<"Stack is empty(1-YES/0-NO):"<<s.empty()<<endl;
	// Size of stack
	cout<<"Size oof stack is: "<<s.size()<<endl;
	  
	return 0;
}
