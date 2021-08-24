class Solution
{
    public:
    //Function to return kth largest element from an array.
    int KthLargest(int arr[], int n, int k) {
        // Your code here
        priority_queue <int,vector<int>,greater<int>> pq(arr,arr+k); //Min Heap
        for(int i=k;i<n;i++)
        {
            if(arr[i]>pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};

//Time Complexity: O(k) + O((n-k) log k)
//Auxiliary Space: O(k)
