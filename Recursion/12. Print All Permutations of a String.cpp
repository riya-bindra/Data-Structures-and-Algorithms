#include <iostream>
#include <string>
using namespace std;

void Permutate(string &s,int i=0)
{
	if(i==s.length()-1)
	{
		cout<<s<<" ";
		return;
	}
	for(int j=i;j<s.length();j++)
	{
		swap(s[i],s[j]);
		Permutate(s,i+1);
		swap(s[j],s[i]);
	}
}

int main()
{
	string s="ABC";
	Permutate(s,0);
	cout<<endl<<endl;
	s="ABCD";
	Permutate(s,0);
	return 0;
}

//Time Complexity: Theta(n!)
//Auxiliary Space: O(n)
//Where n is length of string
