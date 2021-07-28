#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int DistinctUnion(int a[],int m,int b[],int n)
{
	unordered_set<int> h(a,a+m);
	for(int i=0;i<n;i++)
	{
	    h.insert(b[i]);
	}
	return h.size();
	  
	
}

int main()
{
	int a[]={10,15,20,5,30};
	int b[]={30,5,30,80};
	cout<<DistinctUnion(a,5,b,4)<<endl;
	
	int a2[]={10,20};
	int b2[]={20,30};
	cout<<DistinctUnion(a2,2,b2,2)<<endl;
	
	int a3[]={10,10,10};
	int b3[]={10,10};
	cout<<DistinctUnion(a3,3,b3,2)<<endl;
	
	
	return 0;
}

//Time Complexity: Theta(m+n)
//Auxiliary Space: O(m+n)
