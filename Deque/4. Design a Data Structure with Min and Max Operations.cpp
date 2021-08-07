#include <iostream>
#include <deque>
using namespace std;

//All operations are required to be O(1)

struct MyDS
{
	deque<int> dq;
	void insertMin(int x)
	{
		dq.push_front(x);
	}
	
	void insertMax(int x)
	{
		dq.push_back(x);
	}
	
	int getMin()
	{
		return dq.front();
	}
	
	int getMax()
	{
		return dq.back();
	}
	
	void extractMin()
	{
		 dq.pop_front();
	}
	
	void extractMax()
	{
		dq.pop_back();
	}
};

int main()
{
	MyDS ob;
	ob.insertMin(10);
	ob.insertMax(15);
	ob.insertMin(5);
	cout<<ob.getMin()<<endl;
	cout<<ob.getMax()<<endl;
	ob.extractMin();
	cout<<ob.getMin()<<endl;
	cout<<ob.getMax()<<endl;
	ob.extractMax();
	cout<<ob.getMin()<<endl;
	cout<<ob.getMax()<<endl;
	return 0;
}
