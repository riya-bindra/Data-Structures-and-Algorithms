#include <iostream>
using namespace std;

int maxConsec1s(int arr[],int n)
{
	int res=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			count++;
			res=max(res,count);
		}
		else
		{
			count=0;
		}
	}
	return res;
}


int main()
{
	int arr[]={0,1,1,0,1,0};
	int arr2[]={1,1,1,1};
	int arr3[]={0,0,0};
	int arr4[]={1,0,1,1,1,1,0,1,1};
	cout<<maxConsec1s(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	cout<<maxConsec1s(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	cout<<maxConsec1s(arr3,sizeof(arr3)/sizeof(arr3[0]))<<endl;
	cout<<maxConsec1s(arr4,sizeof(arr4)/sizeof(arr4[0]))<<endl;
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
