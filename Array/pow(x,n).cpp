double myPow(double x, int n) {
    // Write Your Code Here
    double ans=1.0;
    int n1=n;
    if(n1<0)
    {
        n1=n1*-1;
    }
    for(int i=0;i<n1;i++)
    {
        ans=ans*x;
    }
    if(n<0)
    {
        ans=1/ans;
    }
    return ans;
}
