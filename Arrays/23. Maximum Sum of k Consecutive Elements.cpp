#include <iostream>
using namespace std;

int maxSumKConsec(int arr[],int n,int k)
{
	int currSum=0;
	for(int i=0;i<k;i++) //Sum of first k consecutive elements
	{
		currSum+=arr[i];
	}
	int maxSum=currSum;
	for(int i=k;i<n;i++)
	{
		currSum=currSum-arr[i-k]+arr[i];
		maxSum=max(maxSum,currSum);
	}
	return maxSum;
}

int main()
{
	int arr[]={1,4,20,3,10,5};
	int arr2[]={1,8,30,-5,20,7};
	int arr3[]={5,-10,6,90,3};
	
	cout<<maxSumKConsec(arr,sizeof(arr)/sizeof(arr[0]),3)<<endl;
	cout<<maxSumKConsec(arr2,sizeof(arr2)/sizeof(arr2[0]),3)<<endl;
	cout<<maxSumKConsec(arr3,sizeof(arr3)/sizeof(arr3[0]),2)<<endl;
	
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
