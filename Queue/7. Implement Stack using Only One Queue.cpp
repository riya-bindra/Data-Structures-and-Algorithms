#include <iostream>
#include <queue>
using namespace std;

struct Stack
{
	queue<int> q;
	
	bool isEmpty()
	{
		return q.empty();
	}
	
	void push(int x)
	{
		int s=q.size();
		q.push(x);
		for(int i=0;i<s;i++)
		{
			q.push(q.front());
			q.pop();
		}
	}
	
	void pop()
	{
		if(isEmpty())
			cout<<"The stack is empty"<<endl;
		else
			q.pop();
	}
	
	int top()
	{
		if(isEmpty())
		{
			cout<<"The stack is empty"<<endl;
			return -1;
		}
		else
		{
			return q.front();
		}
	}
	
	int size()
	{
		return q.size();
	}
};


int main()
{
	Stack s;
	cout<<"Is Empty? "<<s.isEmpty()<<endl;
	cout<<"Size: "<<s.size()<<endl;
	cout<<"Top: "<<s.top()<<endl;
	s.push(10);
	s.push(20);
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
Push operation: O(n)
where n is the size of the stack at the moment.
All other operations: O(1)*/
