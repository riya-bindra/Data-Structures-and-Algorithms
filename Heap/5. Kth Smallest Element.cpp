class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
        priority_queue<int> pq(arr,arr+k); //Max Heap
        for(int i=k;i<n;i++)
        {
            if(arr[i]<pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};
//Time Complexity: O(k) +O((n-k) log k) 
//Auxiliary Space: O(k)
