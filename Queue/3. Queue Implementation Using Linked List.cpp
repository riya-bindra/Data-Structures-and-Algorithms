#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}	
};

struct Queue
{
	Node* front;
	Node* rear;
	int size;
	Queue()
	{
		front=NULL;
		rear=NULL;
		size=0;
	}
	
	int isEmpty()
	{
		return (front==NULL);
	}
	
	int getFront()
	{
		if(isEmpty())
		{
			cout<<"The queue is empty"<<endl;
			return -1;
		}
		return front->data;
	}
	int getRear()
	{
		if(isEmpty())
		{
			cout<<"The queue is empty"<<endl;
			return -1;
		}
		return rear->data;
	}
	void enque(int x)
	{
		Node* temp=new Node(x);
		if(front==NULL)
		{
			front=rear=temp;
		}
		else
		{
			rear->next=temp;
			rear=temp;
		}
		size++;
	}
	
	void deque()
	{
		if(isEmpty())
		{
			cout<<"The queue is empty"<<endl;
			if(size!=0)
				size--;
			return;
		}
		Node* temp=front;
		front=front->next;
		if(front==NULL)
		{
			rear=NULL;
		}
		delete temp;
		size--;
	}
	
	int getSize()
	{
		return size;
	}
	
};

int main()
{
	Queue q;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(10);
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(20);
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(30);
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(40);
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	return 0;
}

/*Time Complexity: 
All operations: O(1)*/
