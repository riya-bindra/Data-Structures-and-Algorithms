class Solution
{
    public:
    //Function to print kth largest element for each element in the stream.
    void kthLargest(int arr[], int n, int k)
    {
    	// your code here
    	priority_queue<int,vector<int>,greater<int>> pq(arr,arr+k);    //Min Heap
    	for(int i=1;i<=(k-1);i++)
    	    cout<<-1<<" ";
    	cout<<pq.top()<<" ";
    	for(int i=k;i<n;i++)
    	{
    	    if(arr[i]>pq.top())
    	    {
    	        pq.pop();
    	        pq.push(arr[i]);
    	    }
    	    cout<<pq.top()<<" ";
    	}
    
    }
};

//Time Complexity: O(k) + O((n-k) log k)
//Auxiliary Space: O(k)
