#include <iostream>
using namespace std;

struct Queue
{
	int cap,size;
	int *arr;
	Queue(int c)
	{
		cap=c;
		size=0;
		arr=new int[c];
	}
	bool isFull()
	{
		return (size==cap);
	}
	bool isEmpty()
	{
		return (size==0);
	}
	void enque(int x)
	{
		if(isFull())
		{
			cout<<"The queue is full already"<<endl;
			return;
		}	
		arr[size]=x;
		size++;
		cout<<"Successfully enqued"<<endl;
	}
	void deque()
	{
		if(isEmpty())
		{
			cout<<"The queue is empty"<<endl;
			return;
		}
		for(int i=0;i<size-1;i++)
			arr[i]=arr[i+1];
		size--;
		cout<<"Successfully dequed"<<endl;
	}
	int getFront() //Index of front
	{
		if(isEmpty())
			return -1;
		return 0;
	}
	int getRear()
	{
		if(isEmpty())
			return -1;
		return (size-1);
	}
};

int main()
{
	Queue q(5);
	cout<<q.isFull()<<endl;
	cout<<q.isEmpty()<<endl;
	q.enque(10);
	q.enque(20);
	cout<<q.isFull()<<endl;
	cout<<q.isEmpty()<<endl;
	cout<<q.getFront()<<endl;
	cout<<q.getRear()<<endl;
	q.enque(30);
	q.enque(40);
	q.enque(50);
	q.enque(60);
	cout<<q.getFront()<<endl;
	cout<<q.getRear()<<endl;
	cout<<q.isFull()<<endl;
	cout<<q.isEmpty()<<endl;
	q.deque();
	q.deque();
	q.deque();
	q.deque();
	q.deque();
	q.deque();
	return 0;	
}

/*Time Complexity:
deque(): O(n)
All other operations: O(1)*/

