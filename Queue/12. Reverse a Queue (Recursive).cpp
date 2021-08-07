#include <iostream>
#include <queue>
using namespace std;

void Reverse(queue<int>& q)
{
	if(q.empty())
		return;
	int x=q.front();
	q.pop();
	Reverse(q);
	q.push(x);
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
