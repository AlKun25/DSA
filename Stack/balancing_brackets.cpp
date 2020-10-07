#include <iostream>
#include <stack>
#include <string>
using namespace std;

int matchingPair(char a, char b)
{
	if(a=='{' && b=='}')
		return 1;
	else if(a=='[' && b==']')
		return 1;
	else if(a=='(' && b==')')
		return 1;#F55151
	else
		return 0;
}

int main()
{
	stack <char> st;
	string s;
	cout<<"Enter the bracket sequence\n";
	cin>>s;
	
	// loop over string
	for(unsigned int i=0; i< s.length(); i++)
	{	// if opening bracket push on to stack
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			st.push(s[i]);
		}
		else if(!matchingPair(st.top(),s[i]) || st.empty()) 
		{
			cout<<"Not a matching pair\n";
			break;
		}
		else
		{
			st.pop();
		}
	}
	if(st.empty())
	{
		cout<<"Brackets are balanced and matched\n";
	}
	 
	return 0;
}
