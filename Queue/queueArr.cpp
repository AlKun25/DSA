#include <iostream>
using namespace std;

#define SIZE 5
int A[SIZE];
int front = -1;
int rear = -1;

bool isEmpty()
{
	if(front==-1 && rear==-1)
		return true;
	else
		return false;
}

void enqueue(int value)
{
	if(rear==SIZE-1)
		cout<<"Queue is full!\n";
	else
	{
		if(front==-1)
			front=0;
		rear++;
		A[rear]=value;
	}
}

void dequeue() 
{
	if(isEmpty())
		cout<<"Queue is empty\n";
	else if(front==rear)
		front = rear = -1;
	else
		front++;
}

void showFront()
{
	if(isEmpty())
		cout<<"Queue is empty\n";
	else
		cout<<"Element at front is:"<<A[front];
}
	
void displayQueue()
{
	if(isEmpty())
		cout<<"Queue is empty\n";
	else
	{
		for(int i=front; i<= rear; i++)
			cout<<A[i]<<endl;
	}
}

int main() 
{
	enqueue(2);
	enqueue(3);
	
	displayQueue();
	
	dequeue();
	
	showFront();
	
	return 0;
}
