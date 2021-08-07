#include <iostream>
using namespace std;

struct Deque
{
	int cap,size,front;
	int* arr;
	Deque(int c)
	{
		cap=c;
		size=0;
		front=0;
		arr=new int[cap];
	}
	
	bool isEmpty()
	{
		return (size==0);
	}
	
	bool isFull()
	{
		return (size==cap);
	}
	
	void insertFront(int x)
	{
		if(isFull())
		{
			cout<<"Deque is full"<<endl;
			return;
		}
		front=(front+cap-1)%cap;
		arr[front]=x;
		size++;
	}
	
	void deleteFront()
	{
		if(isEmpty())
		{
			cout<<"Deque is empty"<<endl;
			return;
		}
		front=(front+1)%cap;
		size--;
	}
	
	void insertRear(int x)
	{
		if(isFull())
		{
			cout<<"Deque is full"<<endl;
			return;
		}
		int newRear=(front+size)%cap;
		arr[newRear]=x;
		size++;
	}
	
	void deleteRear()
	{
		if(isEmpty())
		{
			cout<<"Deque is empty"<<endl;
			return;
		}
		size--;
	}
	
	int getRear()
	{
		if(isEmpty())
			return -1;
		return (front+size-1)%cap;
	}
	
	int getFront()
	{
		if(isEmpty())
			return -1;
		return front;
	}
	
	int getSize()
	{
		return size;
	}
		
};

int main()
{
	Deque dq(4);
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.insertFront(10);
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.insertRear(20);
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.insertRear(30);
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.insertRear(40);
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.insertRear(50);
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.deleteFront();
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.deleteRear();
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.deleteFront();
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.deleteRear();
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.deleteFront();
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
	
	dq.deleteRear();
	cout<<"Is Empty?: "<<dq.isEmpty()<<endl;
	cout<<"Is Full?: "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<"Size: "<<dq.getSize()<<endl;
	cout<<endl<<endl<<endl;
		
	return 0;
}

//Time Complexity: O(1) for all operations
