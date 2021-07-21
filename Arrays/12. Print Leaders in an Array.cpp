#include <iostream>
using namespace std;

void printLeaders(int arr[],int n)
{
	int curr_leader=arr[n-1];
	cout<<curr_leader<" ";
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]>curr_leader)
		{
			curr_leader=arr[i];
			cout<<" "<<curr_leader;
		}
	}
}


int main()
{
	int arr[]={7,10,4,10,6,5,2};
	printLeaders(arr,7);
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
