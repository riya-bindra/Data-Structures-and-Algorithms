#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> q;
	cout<<q.empty()<<endl;
	q.push(10);
	q.push(20);
	q.push(30);
	cout<<q.size()<<endl;
	cout<<q.empty()<<endl;
	cout<<q.front()<<" "<<q.back()<<endl;
	while(q.empty()==false)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}
