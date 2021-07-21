#include <iostream>
using namespace std;

int maxDiff(int arr[],int n)
{
	int minVal=arr[0];
	int res=arr[1]-arr[0];
	for(int i=1;i<n;i++)
	{
		res=max(res,arr[i]-minVal);
		minVal=min(minVal,arr[i]);
	}
	return res;
}

int main()
{
	int arr[]={2,3,10,6,4,8,2};
	cout<<maxDiff(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	int arr2[]={7,9,5,6,3,2};
	cout<<maxDiff(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	int arr3[]={30,10,8,2};
	cout<<maxDiff(arr3,sizeof(arr3)/sizeof(arr3[0]))<<endl;
	
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
