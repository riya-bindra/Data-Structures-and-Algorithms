#include<iostream>
using namespace std;

int Insert(int arr[],int n,int x,int pos,int cap)
{
	if(n==cap || pos>cap-1)
		return -1;
	int index=pos-1;
	for(int i=n;i>index;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[index]=x;
	return n+1;
}

int main()
{
	int arr[6]={3,4,5,6};
	int n=Insert(arr,4,7,2,6);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl<<Insert(arr,5,10,7,6);
	
}
