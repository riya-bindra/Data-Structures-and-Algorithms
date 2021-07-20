#include<iostream>
using namespace std;

int Largest(int arr[],int n)
{
	int maximum=arr[0];
	for(int i=1;i<n;i++)
		maximum=max(maximum,arr[i]);
	return maximum;
}

int main()
{
	int arr[]={3,50,43,65,29};
	cout<<Largest(arr,5);
	return 0;
}

//Time complexity: Theta(n)
//Auxiliary Space: Theta(1)
