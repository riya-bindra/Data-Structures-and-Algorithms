#include<iostream>
using namespace std;

long long Factorial(int n)
{
	if(n==0)
		return 1;
	long long res=1;
	for(int i=2;i<=n;i++)
		res=res*i;
	return res;
}

int main()
{
	cout<<Factorial(5)<<endl;
	cout<<Factorial(6)<<endl;
	cout<<Factorial(10)<<endl;
	cout<<Factorial(0)<<endl;
	
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: O(1)
