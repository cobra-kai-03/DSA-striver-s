vector<int> genrow(int row)
{
    vector<int>grow;
    grow.push_back(1);
    long long ans=1;
    for(int i=1;i<row;i++)
    {
        ans=ans*(row-i);
        ans=ans/i;
        grow.push_back(ans);
    }
    return grow;
}

vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> ans;
    for(int i=1;i<=N;i++)
    {
        vector<int>r;
        r=genrow(i);
        ans.push_back(r);
    }
    return ans;
}
