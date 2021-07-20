#include<iostream>
using namespace std;

int SecondLargest(int arr[],int n)
{
	int res=-1, largest=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[largest])
		{
			res=largest;
			largest=i;
		}
		else if(arr[i]<arr[largest])
		{
			if(res==-1 || arr[i]>arr[res])
				res=i;
		}
	}
	return arr[res];
}

int main()
{
	int arr[]={10,20,12,40,40,12,52,50,50,52};
	cout<<SecondLargest(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
