#include <iostream>
#include <stack>
using namespace std;

struct Queue
{
	stack<int> s1,s2;
	
	void Enqueue(int x)
	{
		s1.push(x);
	}
	
	int Dequeue()
	{
		if(s1.empty())
		{
			cout<<"The queue is empty"<<endl;
			return -1;
		}
		while(s1.empty()==false)
		{
			s2.push(s1.top());
			s1.pop();
		}
		int x=s2.top();
		s2.pop();
		stack<int> s=s1;
		s1=s2;
		s2=s;
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
For dequeue operation: O(n)
Enqueue operation: O(1)*/
