#include<iostream>
using namespace std;

int Delete(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
			break;
	}
	if(i==n)
		return n;
	//Index=i
	for(int j=i;j<n-1;j++)
		arr[j]=arr[j+1];
	return n-1;
}

int main()
{
	int arr[9]={3,4,5,6,7};
	int n=Delete(arr,5,4);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	n=Delete(arr,4,10);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
