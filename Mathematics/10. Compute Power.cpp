#include <iostream>
using namespace std;

int Power(int x,int n) //Want x^n
{
	int res=1;
	while(n>0)
	{
		if(n%2!=0)
			res=res*x;
		x=x*x;
		n=n/2;
	}
	return res;
}


int main()
{
	cout<<Power(2,10)<<endl;
	cout<<Power(3,5)<<endl;
	return 0;
}

//Time Complexity: O(log n)
//Auxiliary Space: O(1)
