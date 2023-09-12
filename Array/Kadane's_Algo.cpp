//Given an integer array arr, find the contiguous subarray (containing at least one number) which
//has the largest sum and returns its sum and prints the subarray.
long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long maxi=-1000001;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>maxi)
        {
            maxi=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    if(maxi<0)
    {
        return 0;
    }
    return maxi;
}
