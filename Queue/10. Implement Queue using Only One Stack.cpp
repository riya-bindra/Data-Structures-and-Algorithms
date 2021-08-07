#include <iostream>
#include <stack>
using namespace std;

struct Queue
{
	stack<int> s;
	void Enqueue(int x)	
	{
		s.push(x);
	}
	int Dequeue()
	{
		if(s.empty())
		{
			cout<<"The queue is empty"<<endl;
			return -1;
		}
		int x=s.top();
		s.pop();
		if(s.empty())
			return x;
		int item=Dequeue();
		s.push(x);
		return item;
	}
};

int main()
{
	Queue q;
	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);
	cout<<q.Dequeue()<<endl;
	cout<<q.Dequeue()<<endl;
	cout<<q.Dequeue()<<endl;
	cout<<q.Dequeue()<<endl;	
	return 0;
}

/*Time Complexity:
Enqueue operation: O(1)
Dequeue operation: O(n)*/
//Auxiliary Space: O(n)
