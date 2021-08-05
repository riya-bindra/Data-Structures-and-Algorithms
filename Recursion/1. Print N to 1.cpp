#include <iostream>
using namespace std;

void printNto1(int n)
{
	if(n<=0)
		return;
	cout<<n<<" ";
	printNto1(n-1);
}

int main()
{
	printNto1(5);
	cout<<endl<<endl;
	printNto1(10);
	cout<<endl<<endl;
	printNto1(1);
	cout<<endl<<endl;
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: O(n)
