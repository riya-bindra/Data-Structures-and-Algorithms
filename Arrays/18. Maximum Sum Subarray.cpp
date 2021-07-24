#include <iostream>
using namespace std;

int maxSumSubarray(int arr[],int n) //Kadane's Algorithm
{
	int res=arr[0];
	int maxEnding[n];
	maxEnding[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		maxEnding[i]=max(maxEnding[i-1]+arr[i],arr[i]);
		res=max(res,maxEnding[i]);
	}
	return res;
}

int main()
{
	int arr[]={2,3,-8,7,-1,2,3};
	int arr2[]={5,8,3};
	int arr3[]={-6,-1,-8};
	cout<<maxSumSubarray(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	cout<<maxSumSubarray(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	cout<<maxSumSubarray(arr3,sizeof(arr3)/sizeof(arr3[0]))<<endl;
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(n)
