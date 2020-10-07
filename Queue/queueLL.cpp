#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *link;
};

Node *front = NULL;
Node *rear = NULL;

bool isEmpty()
{
	if(front==NULL && rear==NULL)
		return true;
	else
		return false;
}

void enqueue(int value)
{
	Node *ptr = new Node();
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
	if(isEmpty())
		cout<<"Queue is empty";
	else 
	{
		Node *ptr = front;
		while(ptr != NULL)
		{
			cout<<ptr->data<<" ";
			ptr = ptr->link;
		}	
	}
}

//Main Function
int main()
{
 int choice, flag=1, value;
 while( flag == 1)
 {
  cout<<"\n1.enqueue 2.dequeue 3.showfront 4.displayQueue 5.exit\n";
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          enqueue(value);
          break;
  case 2: dequeue();
          break;
  case 3: showFront();
          break;
  case 4: displayQueue();
          break;
  case 5: flag = 0;
          break;
  }
 }

 return 0;
}

