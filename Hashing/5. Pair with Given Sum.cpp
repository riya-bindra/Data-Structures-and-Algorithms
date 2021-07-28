#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPair(int arr[],int n,int sum)
{
    unordered_set<int> h;
    for(int i=0;i<n;i++)
    {
        if( h.find(sum-arr[i]) != h.end() )
            return true;
        h.insert(arr[i]);
    }
    return false;
}

int main()
{
	int arr[]={3,2,8,15,-8};
	cout<<isPair(arr,sizeof(arr)/sizeof(arr[0]),17)<<endl<<endl;
	
	int arr2[]={2,1,6,3};
	cout<<isPair(arr2,sizeof(arr2)/sizeof(arr2[0]),6)<<endl<<endl;
	
	int arr3[]={5,8,-3,6};
	cout<<isPair(arr3,sizeof(arr3)/sizeof(arr3[0]),3)<<endl<<endl;
	
	
	
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(n)
