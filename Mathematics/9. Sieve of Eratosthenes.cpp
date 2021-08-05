#include <iostream>
#include <vector>
using namespace std;

void printPrimeNumbers(int n)
{
	vector<bool> isPrime (n+1,true);
	for(int i=2;i<=n;i++)
	{
		if(isPrime[i])
		{
			cout<<i<<" ";
			for(int j=i*i;j<=n;j=j+i)
			{
				isPrime[j]=false;
			}
		}
	}
}

int main()
{
	printPrimeNumbers(1000);
	return 0;
}

//Time Complexity: O(n log log n)
//Auxiliary Space: Theta(n)
