#include <iostream>
using namespace std;

bool EquilibriumPoint(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int l_sum=0;
	for(int i=0;i<n;i++)
	{
		if(l_sum==sum-arr[i])
			return true;
		l_sum+=arr[i];
		sum=sum-arr[i];		
	}
	return false;
}

int main()
{
	int arr[]={3,4,8,-9,20,6};
	int arr2[]={4,2,-2};
	int arr3[]={4,2,2};
	int arr4[]={2,-2,4};
	cout<<EquilibriumPoint(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	cout<<EquilibriumPoint(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	cout<<EquilibriumPoint(arr3,sizeof(arr3)/sizeof(arr3[0]))<<endl;
	cout<<EquilibriumPoint(arr4,sizeof(arr4)/sizeof(arr4[0]))<<endl;
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
