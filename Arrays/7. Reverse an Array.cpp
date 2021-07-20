#include<iostream>
using namespace std;

void Reverse(int arr[],int n)
{
	int low=0,high=n-1;
	while(low<high)
	{
		swap(arr[low],arr[high]);
		low++;
		high--;
	}
}

int main()
{
	int arr[]={10,20,30,40,50};
	Reverse(arr,sizeof(arr)/sizeof(arr[0]));
	for(int i=0;i<5;i++)
		cout<<arr[i]<<" ";
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
