#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool SubarrayGivenSum(int arr[],int n,int sum)
{
    unordered_set<int> h;
    int prefixSum=0;
    for(int i=0;i<n;i++)
    {
        prefixSum+=arr[i];
        if(h.find(prefixSum-sum)!=h.end())
            return true;
        if(prefixSum==sum)
            return true;
        h.insert(prefixSum);
    }
    return false;
}

int main()
{
	int arr[]={5,8,6,13,3,-1};
	cout<<SubarrayGivenSum(arr,sizeof(arr)/sizeof(arr[0]),22)<<endl<<endl;
	
	int arr2[]={15,2,8,10,-5,-8,6};
	cout<<SubarrayGivenSum(arr2,sizeof(arr2)/sizeof(arr2[0]),3)<<endl<<endl;
	
	int arr3[]={3,2,5,6};
	cout<<SubarrayGivenSum(arr3,sizeof(arr3)/sizeof(arr3[0]),10)<<endl<<endl;
		
	int arr4[]={3,2,5,6};
	cout<<SubarrayGivenSum(arr4,sizeof(arr4)/sizeof(arr4[0]),8)<<endl<<endl;
	
	
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(n)
