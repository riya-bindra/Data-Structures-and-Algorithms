#include <iostream>
using namespace std;

//Maximum Difference with Order Problem

/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/

int maxProfit(int arr[],int n)
{
	int profit=0;
	int minimumPrice=arr[0];	//Stores minimum price so far
	int currProfit;
	for(int i=1;i<n;i++)
	{
		currProfit=arr[i]-minimumPrice;
		minimumPrice=min(minimumPrice,arr[i]);
		profit=max(currProfit,profit);	
	}
	return profit;
}



int main()
{
	int arr[]={7,1,5,3,6,4};
	int arr2[]={7,6,4,3,1};
	cout<<maxProfit(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	cout<<maxProfit(arr2,sizeof(arr2)/sizeof(arr2[0]))<<endl;
	return 0;
}

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(1)
