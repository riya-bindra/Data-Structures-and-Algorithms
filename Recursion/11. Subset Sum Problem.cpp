#include <iostream>
using namespace std;

int CountSubsetSum(int arr[],int n,int sum)
{
	if(n==0)
	{
		return (sum==0)?1:0;
	}
	return CountSubsetSum(arr,n-1,sum)+CountSubsetSum(arr,n-1,sum-arr[n-1]);
}


int main()
{
	int arr1[]={10,20,15};
	cout<<CountSubsetSum(arr1,3,25)<<endl;
	int arr2[]={10,20,15};
	cout<<CountSubsetSum(arr1,3,37)<<endl;
	return 0;
}

//Time Complexity: Theta(2^n)
//Auxiliary Space: O(n)
