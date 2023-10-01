vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    long long ls=0,ss=0;
    long long n=a.size();
    for(long long i=0;i<n;i++)
    {
        ls=ls+a[i];
        long long k=a[i]*a[i];
        ss=ss+k;
    }
    long long s1=n*(n+1);
    s1=s1/2;
    s1-=ls;
    long long s2=n*(n+1)*((2*n)+1);
    s2=s2/6;
    s2-=ss;
    long long y=s2/s1;
    y+=s1;
    y=y/2;
    long long x=s2/s1;
    x-=s1;
    x=x/2;
    vector<int>res;
    res.push_back(int(x));
    res.push_back(int(y));
    return res;
}
