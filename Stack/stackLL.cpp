#include <iostream>
using namespace std;

struct Node 
{
	int data;
	Node *link = NULL;
};

Node *top = NULL;

bool isEmpty()
{
	if(top==NULL)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void push(int value)
{
	Node *ptr = new Node();
	ptr->data = value;
	ptr->link = top;
	top = ptr;
}

void pop() 
{
	if(isEmpty())
	{
		cout << "Stack is empty!\n";
	}
	else
	{
		Node *ptr = top;
		top = top->link;
		delete(ptr);
	}	
}	

void showTop()
{
	if(isEmpty())
		cout <<"Stack is empty!\n"<<endl;
	else
		cout<<"Element at the top is:"<<top->data<<endl;
}


int main() 
{
	push(1);
	push(2);
	showTop();
	pop();
	showTop();
	
	
	return 0;
}
