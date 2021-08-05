#include <iostream>
using namespace std;

void print1toN(int n)
{
	if(n<=0)
		return;
	print1toN(n-1);
	cout<<" "<<n<<" ";
}


int main()
{
	print1toN(10);
	cout<<endl<<endl;
	print1toN(1);
	cout<<endl<<endl;
	print1toN(100);
	cout<<endl<<endl;
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: O(n)
