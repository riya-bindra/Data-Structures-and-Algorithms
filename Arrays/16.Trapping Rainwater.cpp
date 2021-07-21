#include <iostream>
using namespace std;

int getWater(int arr[],int n)
{
	int lmax[n],rmax[n];
	lmax[0]=arr[0];
	rmax[n-1]=arr[n-1];
	for(int i=1;i<n;i++)
	{
		lmax[i]=max(lmax[i-1],arr[i]);
	}
	for(int i=n-2;i>=0;i--)
	{
		rmax[i]=max(rmax[i+1],arr[i]);
	}
	int water=0;
	for(int i=1;i<n-1;i++)
	{
		water=water+(min(lmax[i],rmax[i])-arr[i]);
	}
	return water;
}

int main()
{
	int arr[]={3,0,1,2,5};
	cout<<getWater(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	int arr2[]={5,0,6,2,3};
	cout<<getWater(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	int arr3[]={1,2,3};
	cout<<getWater(arr3,3)<<endl;
	int arr4[]={3,2,1};
	cout<<getWater(arr4,3)<<endl;
	return 0;
}
