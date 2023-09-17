class Solution {
public:
    bool isValid(string s) {
        stack<int>stk;
        //int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                stk.push(s[i]);
                //cout<<s[i]<<endl;
            }
            else
            {

             if(stk.empty() || (s[i]==')' && stk.top()!='(')||
            (s[i]==']' && stk.top()!='[')||
            (s[i]=='}' && stk.top()!='{') ){
            
                return false;
            }
            //cout<<s[i]<<endl;
            stk.pop();
            }
            
        }
        
        return stk.empty();
    
    }
};
