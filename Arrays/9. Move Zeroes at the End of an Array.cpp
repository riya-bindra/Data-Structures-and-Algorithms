#include <iostream>
using namespace std;

void MoveZeroesEnd(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count++;
		}
	}
}

int main()
{
	int arr[]={0,0,10,0,0,0,20,30,40,0,0,50,0,60};
	int n=sizeof(arr)/sizeof(arr[0]);
	MoveZeroesEnd(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
	
}
