#include <iostream>
using namespace std;

int maxPieces(int n,int a,int b,int c)
{
	if(n<0)
		return -1;
	if(n==0)
		return 0;
	int res1=max(maxPieces(n-a,a,b,c),maxPieces(n-b,a,b,c));
	int res=max(res1,maxPieces(n-c,a,b,c));
	if(res==-1)
		return -1;
	return res+1;
}

int main()
{
	cout<<maxPieces(5,2,5,1)<<endl;
	cout<<maxPieces(23,12,9,11)<<endl;
	cout<<maxPieces(5,4,2,6)<<endl;
	cout<<maxPieces(5,2,5,1)<<endl;
	return 0;
}

//Time Complexity: O(3^n)
//Auxiliary Space: O(3^n)
