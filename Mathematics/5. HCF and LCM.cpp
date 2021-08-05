#include <iostream>
using namespace std;

int GCD(int a,int b)
{
	if(b==0)
		return a;
	return GCD(b,a%b);
}

int LCM(int a,int b)
{
	return a*b/GCD(a,b);
}


int main()
{
	cout<<GCD(15,12)<<endl;
	cout<<LCM(15,12)<<endl;
	
	return 0;
}

//Time Complexity: O(log min(a,b))
//Auxiliary Space: O(1)
