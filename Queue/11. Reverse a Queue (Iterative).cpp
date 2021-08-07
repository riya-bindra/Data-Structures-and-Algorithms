#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void Reverse(queue<int>& Queue)
{
	stack<int> Stack; 
	while (!Queue.empty()) { 
		Stack.push(Queue.front()); 
		Queue.pop(); 
	} 
	while (!Stack.empty()) { 
		Queue.push(Stack.top()); 
		Stack.pop(); 
	} 
}

void Print(queue<int> &q)
{
	while(q.empty()==false)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

int main()
{
	queue<int> q; 
	q.push(12); 
	q.push(5); 
	q.push(15);
	q.push(20); 

	Reverse(q); 
	Print(q);
}

//Time Complexity: O(n)
//Auxiliary Space: O(n)
