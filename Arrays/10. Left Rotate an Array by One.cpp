#include <iostream>
using namespace std;

void LeftRotateOne(int arr[],int n)
{
	int temp=arr[0];
	for(int i=1;i<n;i++)
		arr[i-1]=arr[i];
	arr[n-1]=temp;
}

int main()
{
	int arr[]={10,20,30,40,50,60};
	int n=sizeof(arr)/sizeof(arr[0]);
	LeftRotateOne(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
