class Solution
{
    public:
    //Function to return k largest elements from an array.
    
    
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int> res;
        priority_queue<int,vector<int>,greater<int>> pq(arr,arr+k); //Min Heap
        for(int i=k;i<n;i++)
        {
            if(arr[i]>pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        while(!pq.empty())
        {
            res.push_back(pq.top());
            pq.pop();
        }
        sort(res.begin(),res.end(),greater<int>());
        return res;
    }
};

//Time Complexity: O(k)+O((n-k) log k) + O(k log k) = O(n log k)
