#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[],int n)
{
	unordered_set<int> h(arr,arr+n);
	return h.size();
}

int main()
{
	int arr[]={15,12,13,12,13,13,18};
	int arr2[]={10,10,10};
	int arr3[]={10,20,30};	
	
	cout<<countDistinct(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	cout<<countDistinct(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	cout<<countDistinct(arr3,sizeof(arr3)/sizeof(arr3[0]))<<endl;
	
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: O(n)
