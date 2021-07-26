#include <iostream>
using namespace std;


int sumQuery(int prefix[],int l,int r)
{
	if(l!=0)
		return prefix[r]-prefix[l-1];
	else
		return prefix[r];
}


int main()
{
	int arr[]={2,8,3,9,6,5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int prefix[n];
	prefix[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		prefix[i]=prefix[i-1]+arr[i];
	}
	cout<<sumQuery(prefix,0,2)<<endl;
	cout<<sumQuery(prefix,1,3)<<endl;
	cout<<sumQuery(prefix,2,6)<<endl;
	return 0;
}

/*Time Complexity: Theta(n) -->For computing Prefix Sum array...
All queries take Theta(1) time*/
//Auxiliary Space: Theta(n) -->For Prefix Sum array
