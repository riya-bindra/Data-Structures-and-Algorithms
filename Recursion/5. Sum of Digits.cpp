#include <iostream>
using namespace std;

int SumofDigits(int n)
{
	if(n==0)
		return 0;
	return n%10+SumofDigits(n/10);
}

int main()
{
	cout<<SumofDigits(234)<<endl;
	cout<<SumofDigits(1000)<<endl;
	cout<<SumofDigits(2347)<<endl;
	cout<<SumofDigits(456)<<endl;
	return 0;
}

//Time Complexity: Theta(d)
//Auxiliary Space: Theta(d)
