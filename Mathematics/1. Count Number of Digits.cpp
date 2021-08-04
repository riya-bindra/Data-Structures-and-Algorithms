#include <iostream>
using namespace std;

int CountDigits(int n)
{
	if(n==0)
		return 1;
	int count=0;
	while(n!=0)
	{
		n=n/10;
		count=count+1;
	}
	return count;
}

int main()
{
	cout<<CountDigits(234)<<endl;
	cout<<CountDigits(2345)<<endl;
	cout<<CountDigits(0)<<endl;	
	return 0;
}

//Time Complexity: Theta(No of digits)
//Auxiliary Space: O(1)
