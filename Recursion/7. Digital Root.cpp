//Problem Link: https://practice.geeksforgeeks.org/problems/digital-root/1/?track=DSASP-Recursion&batchId=154#

//You are given a number n. You need to find the digital root of n. DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.


class Solution{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        //Your code here
    	if(n>=0 && n<=9)
		return n;
	int s=0;
	while(n>0)
	{
		s=s+(n%10);
		n=n/10;
	}
	return digitalRoot(s);
    }
};
