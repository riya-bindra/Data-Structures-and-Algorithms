#include <iostream>
using namespace std;

int RemoveDuplicates(int arr[],int n) //Returns new size
{
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[res-1])
		{
			arr[res]=arr[i];
			res++;
		}
	}
	return res;
}

int main()
{
	int arr[]={3,3,4,4,5,6,6,6,7};
	int n=RemoveDuplicates(arr,sizeof(arr)/sizeof(arr[0]));
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
