#include <bits/stdc++.h>
using namespace std;

void NbonacciNumbers(int n,int m)
{
	vector<int> v;
	for(int i=0;i<n-1;i++)
	{
		v.push_back(0);
		cout<<v[i]<<" ";
	}
	v.push_back(1);
	cout<<v[n-1]<<" ";
	int sum;
	for(int j=n+1;j<=m;j++)
	{
		sum=accumulate(v.begin(), v.end(), 0);
		v.erase(v.begin()+0);
		v.push_back(sum);
		cout<<sum<<" ";
	}		
}

int main()
{
	NbonacciNumbers(3,8);
	cout<<endl;
	NbonacciNumbers(4,10);
	return 0;
}


//Time Complexity: Theta(m)
//Auxiliary Space: Theta(n)
