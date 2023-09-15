string read(int n, vector<int> nums, int target)
{
    // Write your code here.
     sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        int sum=0;
        
        string str="NO";
        while(left<right)
        {
            sum=nums[left]+nums[right];
            if(sum==target)
            {
                
                string k="YES";
                return k;
            }
            if(sum<target)
            {
                left++;
            }
            else if(sum>target)
            {
                right--;
            }
        }
        
        
        return str;
}
