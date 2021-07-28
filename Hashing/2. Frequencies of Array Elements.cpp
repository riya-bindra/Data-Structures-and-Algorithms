#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[],int n)
{
	unordered_map<int,int> h;
	for(int i=0;i<n;i++)
	    h[arr[i]]++;
	for(auto x:h)
	    cout<<x.first<<" "<<x.second<<endl;
	cout<<endl<<endl;
}

int main()
{
	int arr[]={15,12,13,12,13,13,18};
	int arr2[]={10,10,10};
	int arr3[]={10,20,30};	
	
	countFreq(arr,sizeof(arr)/sizeof(arr[0]));
	countFreq(arr2,sizeof(arr2)/sizeof(arr2[0]));
	countFreq(arr3,sizeof(arr3)/sizeof(arr3[0]));
	
	
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: O(n)
