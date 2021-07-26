#include <iostream>
using namespace std;

void minimumConsecutiveFlips(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1])
		{
			if(arr[i]!=arr[0])
			{
				cout<<"From "<<i<<" to ";
			}
			else
			{
				cout<<i-1<<endl;
			}
		}
	}
	if(arr[n-1]!=arr[0])
	{
		cout<<n-1<<endl;
	}
}

int main()
{
	int arr[]={1,1,0,0,0,1};
	int arr2[]={1,0,0,0,1,0,0,1,1,1,1};
	int arr3[]={1,1,1,1};
	int arr4[]={0,1};
	int arr5[]={0,0,1,1,0,0,1,1,0,1};
	minimumConsecutiveFlips(arr,sizeof(arr)/sizeof(arr[0]));
		cout<<endl<<endl;
	minimumConsecutiveFlips(arr2,sizeof(arr2)/sizeof(arr2[0]));
		cout<<endl<<endl;
	minimumConsecutiveFlips(arr3,sizeof(arr3)/sizeof(arr3[0]));
		cout<<endl<<endl;
	minimumConsecutiveFlips(arr4,sizeof(arr4)/sizeof(arr4[0]));
		cout<<endl<<endl;
	minimumConsecutiveFlips(arr5,sizeof(arr5)/sizeof(arr5[0]));
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
