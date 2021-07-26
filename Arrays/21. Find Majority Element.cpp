#include <iostream>
using namespace std;

int findMajority(int arr[],int n)
{
	int count=1;
	int res=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==arr[res])
			count++;
		else
			count--;
		if(count==0)
		{
			count=1;
			res=i;
		}
	}
	count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[res])
			count++;
	}
	if(count>n/2)
		return res;
	return -1;
}

int main()
{
	int arr[]={8,3,4,8,8};
	int arr2[]={3,7,4,7,7,5};
	int arr3[]={20,30,40,50,50,50,50};
	cout<<findMajority(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	cout<<findMajority(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	cout<<findMajority(arr3,sizeof(arr3)/sizeof(arr3[0]))<<endl;
	
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
