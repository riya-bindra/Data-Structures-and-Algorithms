#include <iostream>
using namespace std;

void printDivisors(int n)
{
	if(n<=1)
		return;
	while(n%2==0)
	{
		cout<<2<<" ";
		n=n/2;
	}
	while(n%3==0)
	{
		cout<<3<<" ";
		n=n/3;
	}
	for(int i=5;i*i<=n;i++)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}
		
		while(n%(i+2)==0)
		{
			cout<<(i+2)<<" ";
			n=n/(i+2);
		}
	}
	if(n>3)
	{
		cout<<n<<" ";
	}
	
}

int main()
{
	printDivisors(15);
	cout<<endl<<endl;
	printDivisors(100);
	cout<<endl<<endl;
	printDivisors(450);
	cout<<endl<<endl;
	printDivisors(84);
	cout<<endl<<endl;
	return 0;
}

//Time Complexity: O(sqrt(n))
//Auxiliary Space: O(1)
