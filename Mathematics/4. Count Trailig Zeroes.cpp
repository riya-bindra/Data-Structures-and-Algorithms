#include<iostream>
using namespace std;

int TrailingZeroes(int n)
{
	int count=0;
	for(int i=5;i<=n;i=i*5)
		count+=n/i;
	return count;
}

int main()
{
	cout<<TrailingZeroes(5)<<endl;
	cout<<TrailingZeroes(10)<<endl;
	
	return 0;
}

//Time Complexity: Theta(log n)
//Auxiliary Space: O(1)
