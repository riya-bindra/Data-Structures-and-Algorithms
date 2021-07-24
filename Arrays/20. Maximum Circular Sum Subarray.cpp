#include <iostream>
using namespace std;

int maxNormalSum(int arr[],int n) //Standard Kadane's Algorithm
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

int maxCircularSum(int arr[],int n)
{
	int maxNormal=maxNormalSum(arr,n);
	if(maxNormal<0)
		return maxNormal;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		arr[i]=(-1*arr[i]);
	}
	int maxCircular=sum+maxNormalSum(arr,n);
	return max(maxNormal,maxCircular);
}


int main()
{
	int arr[]={8,-4,3,-5,4};
	int arr2[]={-8,-3};
	int arr3[]={5,-2,3,4};
	int arr4[]={3,-4,5,6,-8,7};
	cout<<maxCircularSum(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	cout<<maxCircularSum(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	cout<<maxCircularSum(arr3,sizeof(arr3)/sizeof(arr3[0]))<<endl;
	cout<<maxCircularSum(arr4,sizeof(arr4)/sizeof(arr4[0]))<<endl;
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(n)
