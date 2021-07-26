#include <iostream>
using namespace std;

void ThreeEqualParts(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
	if(sum%3!=0)
	{
		cout<<"The array cannot be divided into 3 parts with equal sum"<<endl;
		return;
	}
	int sumOfEachSubarray=sum/3;
	int endIndex1=-1,endIndex2=-1;
	
	//Converting arr[] to Prefix Sum array
	for(int i=1;i<n;i++)
	{
		arr[i]=arr[i]+arr[i-1];
		if(arr[i]==sumOfEachSubarray)
		{
			endIndex1=i;
		}
		else if(arr[i]==(2*sumOfEachSubarray))
		{
			endIndex2=i;
			break;
		}
	}
	if(endIndex1!=-1 && endIndex2!=-1)
	{
		cout<<"From 0 to "<<endIndex1<<endl;
		cout<<"From "<<endIndex1+1<<" to "<<endIndex2<<endl;
		cout<<"From "<<endIndex2+1<<" to "<<n-1<<endl;
	}
	else
	{
		cout<<"The array cannot be divided into 3 parts with equal sum"<<endl;
	}
}


int main()
{
	int arr[]={5,2,6,1,1,1,5};
	int arr2[]={5,1,7,1,1,1,5};
	int arr3[]={1,3,4,0,4};
	ThreeEqualParts(arr,sizeof(arr)/sizeof(arr[0]));
	cout<<endl<<endl;
	ThreeEqualParts(arr2,sizeof(arr2)/sizeof(arr2[0]));
	cout<<endl<<endl;
	ThreeEqualParts(arr3,sizeof(arr3)/sizeof(arr3[0]));
	cout<<endl<<endl;
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: Theta(1)
