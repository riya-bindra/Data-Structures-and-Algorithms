#include <iostream>
using namespace std;

//This approach works only for non-negative integers

bool isPresentSubarray(int arr[],int n,int givenSum)
{
	int currSum=arr[0];
	int s=0;
	for(int e=1;e<n;e++)
	{
		while(currSum>givenSum && s<e-1)
		{
			currSum=currSum-arr[s];
			s++;
		}
		if(currSum==givenSum)
			return true;
		if(e<n)
			currSum=currSum+arr[e];
	}
	return (currSum==givenSum);
	
}

int main()
{
	int arr[]={1,4,20,3,10,5};
	cout<<isPresentSubarray(arr,sizeof(arr)/sizeof(arr[0]),32)<<endl;
	cout<<isPresentSubarray(arr,sizeof(arr)/sizeof(arr[0]),37)<<endl;
	cout<<isPresentSubarray(arr,sizeof(arr)/sizeof(arr[0]),23)<<endl;
	cout<<isPresentSubarray(arr,sizeof(arr)/sizeof(arr[0]),33)<<endl;
	
	
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
