class Solution
{
    public:
    //Function to find the nth fibonacci number using top-down approach.
    long long findNthFibonacci(int number, long long int dp[])
    {
        // Your Code Here
        if(dp[number]==0)
        {
            long long int res;
            if(number==1 || number==0)
                res=number;
            else
                res=findNthFibonacci(number-1,dp)+findNthFibonacci(number-2,dp);
            dp[number]=res;
        }
    return dp[number];
    }

};

//Time Complexity: Theta(n)
//Auxiliary Space: Theta(n)
