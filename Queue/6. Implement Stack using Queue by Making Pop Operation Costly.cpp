#include <iostream>
#include <queue>
using namespace std;

struct Stack
{
	int currSize;
	queue<int> q1,q2;
	Stack()
	{
		currSize=0;
	}
	
	bool isEmpty()
	{
		return (currSize==0);
	}
	
	void push(int x)
	{
		q1.push(x);
		currSize++;
	}
	
	void pop()
	{
		if(isEmpty())
		{
			cout<<"The queue is empty"<<endl;
			return;
		}
		
		while(q1.size()!=1)
		{
			q2.push(q1.front());
			q1.pop();
		}
		q1.pop();
		queue<int> q=q1;
		q1=q2;
		q2=q;
		currSize--;
	}
	
	int top()
	{
		if(isEmpty())
		{
			cout<<"The stack is empty"<<endl;
			return -1;
		}
		return q1.back();
	}
		
	int size()
	{
		return currSize;
	}
};


int main()
{
	Stack s;
	cout<<"Is Empty? "<<s.isEmpty()<<endl;
	cout<<"Size: "<<s.size()<<endl;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<"Is Empty? "<<s.isEmpty()<<endl;
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	s.pop();
	cout<<"Is Empty? "<<s.isEmpty()<<endl;
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	s.pop();
	cout<<"Is Empty? "<<s.isEmpty()<<endl;
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	s.pop();
	cout<<"Is Empty? "<<s.isEmpty()<<endl;
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;	
	return 0;
}
/*Time Complexity:
Pop operation: O(n)
where n is the size of stack at the moment
All other operations O(1)*/
