#include <iostream>
using namespace std;

int maxEvenOddSubarray(int arr[],int n)
{
	int count=1;
	int res=1;
	for(int i=1;i<n;i++)
	{
		if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
		{
			count++;
			res=max(res,count);
		}
		else
		{
			count=1;
		}
	}
	return res;
}

int main()
{
	int arr[]={10,12,14,7,8};
	int arr2[]={7,10,13,14};
	int arr3[]={10,12,8,4};
	cout<<maxEvenOddSubarray(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	cout<<maxEvenOddSubarray(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	cout<<maxEvenOddSubarray(arr3,sizeof(arr3)/sizeof(arr3[0]))<<endl;
	
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
