#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &str, int start, int end)
{
	if(start>=end)
		return true;
	return (str[start]==str[end] && isPalindrome(str,start+1,end-1));
}

int main()
{
	string str="cabbac";
	cout<<isPalindrome(str,0,5)<<endl;
	string str2="abcba";	
	cout<<isPalindrome(str2,0,4)<<endl;
	string str3="aaaaaa";
	cout<<isPalindrome(str3,0,5)<<endl;	
	string str4="madam";
	cout<<isPalindrome(str4,0,4)<<endl;
	string str5="Riya";
	cout<<isPalindrome(str5,0,3)<<endl;	
	return 0;
}

//Time Complexity: O(n) //Atmost n/2 iterations
//Auxiliary Space: O(n)
