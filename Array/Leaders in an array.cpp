vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int n=a.size();
    int max=a[n-1];
    vector<int>ans;
    ans.push_back(max);
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>max)
        {
            max=a[i];
            ans.push_back(max);
        }
    }
    return ans;
}
