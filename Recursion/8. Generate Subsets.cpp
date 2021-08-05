#include <iostream>
#include <string>
using namespace std;

void Subsets(string &s,string curr,int i)
{
	if(i==s.length())
	{
		cout<<curr<<"  ";
		return;
	}
	Subsets(s,curr,i+1);
	Subsets(s,curr+s[i],i+1);
}

int main()
{
	string s="AB";
	Subsets(s,"",0);
	cout<<endl<<endl;
	string s2="ABC";
	Subsets(s2,"",0);
	cout<<endl<<endl;
	string s3="ABCD";
	Subsets(s3,"",0);
	cout<<endl<<endl;
	return 0;
}

//Time Complexity: O(2^n)
//Auxiliary Space: O(n)
