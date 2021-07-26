#include <iostream>
using namespace std;

int SmallestSubarray(int arr[],int n,int x) //Returns n+1 if not possible
{
	int currSum=0;
	int minLength=n+1;
	int start=0,end=0;
	while(end<n)
	{
		while(end<n && currSum<=x)
		{
			currSum+=arr[end];
			end++;
		}
		while(currSum>x && start<n)
		{
			if(end-start<minLength)
			{
				minLength=end-start;
			}
			currSum-=arr[start];
			start++;
		}
	}
	return minLength;
}

int main()
{
	int arr[]={1, 4, 45, 6, 0, 19};
	int arr2[]={1, 10, 5, 2, 7};
	int arr3[]={1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
	int arr4[]={1, 2, 4};
	cout<<SmallestSubarray(arr,sizeof(arr)/sizeof(arr[0]),51)<<endl;
	cout<<SmallestSubarray(arr2,sizeof(arr2)/sizeof(arr2[0]),9)<<endl;
	cout<<SmallestSubarray(arr3,sizeof(arr3)/sizeof(arr3[0]),280)<<endl;
	cout<<SmallestSubarray(arr4,sizeof(arr4)/sizeof(arr4[0]),8)<<endl;
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: Theta(1)
