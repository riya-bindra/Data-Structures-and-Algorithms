#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq={10,20,30};
	dq.push_front(5);
	dq.push_back(50);
	for(auto x: dq)
		cout<<x<<" ";
	cout<<endl;
	cout<<dq.front()<<" "<<dq.back()<<endl;
	dq.pop_back();
	dq.pop_front();
	for(auto x: dq)
		cout<<x<<" ";
	cout<<endl;
	cout<<dq.front()<<" "<<dq.back()<<endl;
	cout<<dq.size()<<endl;
    dq.insert(dq.begin()+1,200);
	for(auto x: dq)
		cout<<x<<" ";
	cout<<endl;
	cout<<dq.front()<<" "<<dq.back()<<endl;
	cout<<dq.size();
}

/*Output:
5 10 20 30 50 
5 50
10 20 30 
10 30
3
10 200 20 30 
10 30
4*/

