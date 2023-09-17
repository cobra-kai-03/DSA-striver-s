class Solution {
public:
    int maxDepth(string s) {
        stack<char>stk;
        int cnt=0,max=-1;
        for(auto i:s)
        {
            if(i=='(')
            {
                stk.push(i);
                cnt++;
            }
            else if(i==')')
            {
                stk.pop();
                cnt=stk.size();
            }
            if(cnt>max)
            {
                max=cnt;
            }
        }
        return max;
    }
};
