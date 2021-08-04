#include<iostream>
using namespace std;

bool Palindrome(int n)
{
	int temp=n,r;
	int rev=0;
	while(temp!=0)
	{
		r=temp%10;
		rev=rev*10+r;
		temp=temp/10;
	}
	return (n==rev);
}


int main()
{
	cout<<Palindrome(4334)<<endl;
	cout<<Palindrome(433)<<endl;
	cout<<Palindrome(543345)<<endl;
	cout<<Palindrome(0)<<endl;	
	return 0;
}

//Time Cimplexity: Theta(No. of digits)
//Auxiliary Space: Theta(1)
