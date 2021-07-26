#include <iostream>
#include <vector>
using namespace std;

//Prefix Sum Technique

/*Assuming:
0<=L[i],R[i]<1000*/

int maxAppearing(int L[],int R[],int n)
{
	int arr[1000]={};
	for(int i=0;i<n;i++)
	{
		arr[L[i]]++;
		arr[R[i]+1]--;
	}
	int maxFreq=arr[0],res=0;
	for(int i=1;i<1000;i++)
	{
		arr[i]+=arr[i-1];
		if(arr[i]>maxFreq)
		{
			maxFreq=arr[i];
			res=i;
		}
	}
	return res;
}



int main()
{
	int L[]={1,2,3};
	int R[]={3,5,7};
	int L2[]={1,2,5,15};
	int R2[]={5,8,7,18};
	cout<<maxAppearing(L,R,3)<<endl;
	cout<<maxAppearing(L2,R2,4)<<endl;
	return 0;
}

//Time Complexity: Theta(n)

/*Auxiliary Space: Theta(1)
If maximum element is given m then Theta(m)*/
