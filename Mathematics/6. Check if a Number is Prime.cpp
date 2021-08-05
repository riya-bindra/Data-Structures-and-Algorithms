#include <iostream>
using namespace std;

bool checkPrime(int n)
{
	if(n==1)
		return false;
	if(n==2 || n==3)
		return true;
	if(n%2==0 || n%3==0)
		return false;
	for(int i=5;i*i<=n;i=i+6)
		if(n%i==0 || n%(i+2)==0)
			return false;
	return true;
}

int main()
{
	cout<<checkPrime(10)<<endl;
	cout<<checkPrime(57)<<endl;
	cout<<checkPrime(29)<<endl;
	cout<<checkPrime(79)<<endl;
	return 0;
}

//Time Complexity: O(sqr(n))
//Auxiliary Space: O(1)
