#include <iostream>
using namespace std;

int maxProfit(int arr[],int n)
{
	int profit=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
			profit+=(arr[i]-arr[i-1]);
	}
	return profit;
}

int main()
{
	int arr[]={1,5,3,8,12};
	cout<<maxProfit(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	int arr2[]={30,20,10};
	cout<<maxProfit(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	int arr3[]={1,5,3,1,2,8};
	cout<<maxProfit(arr3,sizeof(arr3)/sizeof(arr3[0]))<<endl;
	
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
