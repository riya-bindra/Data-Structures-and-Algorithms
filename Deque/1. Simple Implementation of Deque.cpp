#include <iostream>
using namespace std;

struct Deque
{
	int cap,size;
	int *arr;
	Deque(int c)
	{
		cap=c;
		size=0;
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
	
	void insertRear(int x)
	{
		if(isFull())
		{
			cout<<"Deque is full"<<endl;
			return ;
		}
		arr[size]=x;
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
		return size-1;
	}
	
	void insertFront(int x)
	{
		if(isFull())
		{
			cout<<"Deque is full"<<endl;
			return;
		}
		for(int i=size-1;i>=0;i--)
			arr[i+1]=arr[i];
		arr[0]=x;
		size++;
	}
	
	void deleteFront()
	{
		if(isEmpty())
		{
			cout<<"Deque is empty"<<endl;
			return;
		}
		for(int i=0;i<size-1;i++)
			arr[i]=arr[i-1];
		size--;
	}
	
	int getFront()
	{
		if(isEmpty())
			return -1;
		return 0;
	}
};

int main()
{
	Deque dq(4);
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<endl<<endl<<endl;
	dq.insertFront(10);
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<endl<<endl<<endl;
	dq.insertRear(20);
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<endl<<endl<<endl;
	dq.insertFront(30);
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<endl<<endl<<endl;
	dq.insertFront(40);
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<endl<<endl<<endl;	
	dq.insertFront(50);
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<endl<<endl<<endl;	
	dq.deleteFront();
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<endl<<endl<<endl;	
	dq.deleteFront();
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<endl<<endl<<endl;	
	dq.deleteFront();
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<endl<<endl<<endl;	
	dq.deleteFront();
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	cout<<endl<<endl<<endl;	
	dq.deleteFront();
	cout<<"Is empty? "<<dq.isEmpty()<<endl;
	cout<<"Is full? "<<dq.isFull()<<endl;
	cout<<"Front: "<<dq.getFront()<<endl;
	cout<<"Rear: "<<dq.getRear()<<endl;
	return 0;
}

/*Time Complexity:
For insertFront(),deleteFront(): O(n)
For all other operations: O(1)*/
