#include <iostream>
#include <stack>
using namespace std;

struct Queue
{
	stack<int> s1,s2;
	
	void Enqueue(int x)
	{
		while(s1.empty()==false)
		{
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x);
		while(s2.empty()==false)
		{
			s1.push(s2.top());
			s2.pop();
		}
	}
	
	int Dequeue()
	{
		if(s1.empty())
		{
			cout<<"The queue is empty"<<endl;
			return -1;
		}
		int x=s1.top();
		s1.pop();
		return x;
	}
};

int main()
{
	Queue q;
	q.Enqueue(10);
	q.Enqueue(20);
	cout<<q.Dequeue()<<endl;
	cout<<q.Dequeue()<<endl;
	cout<<q.Dequeue()<<endl;	
	return 0;
}

/*Time Complexity:
Enqueue: O(n)
Dequeue: O(1)
