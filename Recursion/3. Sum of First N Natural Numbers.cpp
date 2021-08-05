#include <iostream>
using namespace std;

int getSum(int n)
{
	if(n==0)
		return 0;
	return n+getSum(n-1);	
}


int main()
{
	cout<<getSum(5)<<endl<<endl;
	cout<<getSum(4)<<endl<<endl;
	cout<<getSum(10)<<endl<<endl;
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: O(n)
