#include <iostream>
using namespace std;

int Josephus(int n,int k)
{
	if(n==1)
		return 0;
	return (Josephus(n-1,k)+k)%n;
}

int main()
{
	cout<<Josephus(5,3);
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: O(n)
