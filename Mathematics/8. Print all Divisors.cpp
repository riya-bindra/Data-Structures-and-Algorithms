#include <iostream>
using namespace std;

void printDivisors(int n)
{
	int i;
	for(i=1;i*i<=n;i++)
	{
		if(n%i==0)
			cout<<i<<" ";
	}
	for( ;i>=1;i--)
	{
		if(n%i==0)
			cout<<n/i<<" ";
	}
}


int main()
{
	printDivisors(10);
	cout<<endl<<endl;
	printDivisors(15);
	cout<<endl<<endl;
	printDivisors(100);
	cout<<endl<<endl;
	printDivisors(7);
	cout<<endl<<endl;
	return 0;
}

//Time Complexity: O(sqrt(n))
//Auxiliary Space: O(1)
