#include <iostream>
#include <queue>
using namespace std;

struct Stack
{
	queue<int> q1,q2;
	int currSize;
	
	Stack()
	{
		currSize=0;
	}
	
	int isEmpty()
	{
		return (currSize==0);
	}
	
	void pop()
	{
		if(isEmpty())
		{
			cout<<"The stack is empty"<<endl;
			return;
		}
		q1.pop();
		currSize--;
		cout<<"Pop successful"<<endl;
	}
	
	int top()
	{
		if(isEmpty())
		{
			cout<<"The stack is empty"<<endl;
			return -1;
		}
		return q1.front();
	}
	
	
	void push(int x)
	{
		q2.push(x);
		while(q1.empty()==false)
		{
			q2.push(q1.front());
			q1.pop();
		}
		queue<int> q=q1;
		q1=q2;
		q2=q;
		currSize++;		
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
	s.push(10);
	cout<<"Size: "<<s.size()<<endl;
	s.push(20);
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	s.push(30);
	s.push(40);
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	s.pop();
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	s.pop();
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	s.pop();
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	s.pop();
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	s.pop();
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	return 0;
}

/*Time Complexity:
Push operation: O(n) where n is the size of stack at the moment.
All other operations: O(1)*/
