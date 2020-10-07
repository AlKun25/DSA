#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* link;
};

Node* front = NULL;
Node* rear = NULL;

bool isEmpty()
{
	if(front==NULL && rear==NULL)
		return true;
	else
		return false;
}

void enqueue(int value)
{
	Node* ptr = new Node();
	ptr->data = value;
	ptr->link = NULL;
	
	if(front == NULL)
	{
		front = ptr;
		rear = ptr;
	}
	else
	{
		rear->link = ptr;
		rear = ptr;
	}
}

void dequeue()
{
	if(isEmpty())
		cout<<"Queue is empty";
	else if(front==rear)
	{
		free(front);
		front = rear = NULL;
	}
	else
	{
		Node *ptr = front;
		front = front->link;
		free(ptr);
	}
}

void showFront()
{
	if(isEmpty())
		cout<<"Queue is empty";
	else
		cout<<front->data;
}

void displayQueue()
{
	if(is)}
