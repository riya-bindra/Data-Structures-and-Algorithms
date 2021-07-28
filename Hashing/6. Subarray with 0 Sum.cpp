#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool Subarray0Sum(int arr[],int n)
{
    unordered_set<int> h;
    int prefixSum=0;
    for(int i=0;i<n;i++)
    {
        prefixSum+=arr[i];
        if(h.find(prefixSum)!=h.end())
            return true;
        if(prefixSum==0)
            return true;
        h.insert(prefixSum);
    }
    return false;
}

int main()
{
	int arr[]={1,4,13,-3,-10,5};
	cout<<Subarray0Sum(arr,sizeof(arr)/sizeof(arr[0]))<<endl<<endl;
	
	int arr2[]={-1,4,-3,5,1};
	cout<<Subarray0Sum(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl<<endl;
	
	int arr3[]={3,1,-2,5,6};
	cout<<Subarray0Sum(arr3,sizeof(arr3)/sizeof(arr3[0]))<<endl<<endl;
	
	int arr4[]={5,6,0,8};
	cout<<Subarray0Sum(arr4,sizeof(arr4)/sizeof(arr4[0]))<<endl<<endl;
	
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(n)
