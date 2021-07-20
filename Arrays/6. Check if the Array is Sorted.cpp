#include<iostream>
using namespace std;

bool CheckSorted(int arr[],int n)
{
	for(int i=1;i<n;i++)
		if(arr[i-1]>arr[i])
			return false;
	return true;
}

int main()
{
	int arr[]={10,20,20,30,34,45};
	cout<<CheckSorted(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	int arr2[]={12,10,30,40};
	cout<<CheckSorted(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
