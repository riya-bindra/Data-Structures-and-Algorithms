#include <iostream>
#include <queue>
using namespace std;

void printN(int n)
{
	queue<string> q;
	q.push("5");
	q.push("6");
	for(int i=0;i<n;i++)
	{
		string curr=q.front();
		q.pop();
		cout<<curr<<endl;
		q.push(curr+"5");
		q.push(curr+"6");	
	}
}

int main()
{
	printN(100);
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(n)
