#include <iostream>
using namespace std;

struct Queue
{
	int front,size,cap;
	int *arr;
	Queue(int c)
	{
		cap=c;
		size=0;
		front=0;
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
	
	void enque(int x)
	{
		if(isFull())
		{
			cout<<"The queue is already full"<<endl;
			return;
		}
		int rear=getRear();
		rear=(rear+1)%cap;
		arr[rear]=x;
		size++;	
		cout<<"Successfull enqued"<<endl;	
	}
	
	void deque()
	{
		if(isEmpty())
		{
			cout<<"The queue is empty"<<endl;
			return;
		}
		front=(front+1)%cap;
		size--;
		cout<<"Successfully dequed"<<endl;
	}
	
};

int main()
{
	Queue q(5);
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(10);
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(20);
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(30);
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(40);
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(50);
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(60);
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(80);
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.deque();
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	q.enque(10);
	cout<<"Is Full? "<<q.isFull()<<endl;
	cout<<"Is Empty? "<<q.isEmpty()<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.getSize()<<endl;
	cout<<endl<<endl;
	return 0;
}

/*Time Complexity: O(1) for all operations*/
