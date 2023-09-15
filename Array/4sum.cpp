vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        //if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<n;j++)
        {
            //if(j>i+1 && nums[j]==nums[j-1]) continue;
            int k=j+1;
            int l=n-1;
            long long sum=0;
            while(k<l)
            {
                sum=nums[i]+nums[j]+nums[k]+nums[l];
                if(sum==target)
                {
                    vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
                }
                if(sum<target)
                {
                    k++;
                }
                //if(sum>target)
                else
                {
                    l--;
                }
            }
        }
    }
    return ans;
}
