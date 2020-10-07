#include <iostream>
using namespace std;

#define SIZE 5
int A[SIZE];
int top = -1;

bool isEmpty() 
{
	if(top==-1)
	return true;
	else
	return false;	
}

void push(int value)
{
	if(top==SIZE-1)
	{
		cout<<"Stack is full!\n";
	}
	else
	{
		top++;
		A[top] = value;
	}
}

void pop()
{
	if(isEmpty())
	{
		cout<<"Stack is empty!\n";
	}
	else
	{
		top--;
	}
}

void displayStack()
{
	if(isEmpty())
	{
		cout<<"Stack is empty!\n";
	}
	else 
	{
		for(int i=0; i<=top; i++)
			cout<<A[i]<<" ";
		
		cout<<"\n";
	}
	
}

void show_top() 
{
	if(isEmpty())
	{
		cout<<"Stack is empty!\n";	
	}
	else
	{
		cout<<"Element at the top is: "<<A[top]<<"\n";
	}
}

int main()
{
	push(2);
	push(3);
	
	displayStack();
	
	pop();
	
	show_top();
	
	return 0;
}
