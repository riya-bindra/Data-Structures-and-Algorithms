#include <iostream>
using namespace std;

void Reverse(int arr[],int low,int high)
{
	while(low<high)
	{
		swap(arr[low],arr[high]);
		low++;
		high--;
	}
}

void LeftRotateD(int arr[],int n,int d)
{
	Reverse(arr,0,d-1);
	Reverse(arr,d,n-1);
	Reverse(arr,0,n-1);
}

int main()
{
	int arr[]={10,20,30,40,50};
	int d=3;
	LeftRotateD(arr,5,3);
	for(int i=0;i<5;i++)
		cout<<arr[i]<<" ";
	return 0;
}

//Time Complexity: Theta(d+n-d+n)=Theta(2n)=Theta(n)
//Auxilairy Space: Theta(1)
