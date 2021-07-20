#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
		if(arr[i]==x)
			return i;
	return -1;
}

int main()
{
	int arr[]={3,4,6,7};
	cout<<LinearSearch(arr,4,6)<<endl;
	cout<<LinearSearch(arr,4,10)<<endl;
}

//Time Complexity: O(n)
//Auxiliary Space: O(1)
