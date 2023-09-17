class Solution {
public:
    string reverseWords(string s) {
        string k="";
        string res="";
        int lemme=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                k+=s[i];
                cout<<k<<endl;
            }
            else if(k!="")
            {
                lemme=1;
                reverse(k.begin(),k.end());
                if(res=="")
                {
                    res=k;
                }
                else
                {
                    res=res+" "+k;
                }
                k="";
                
            }
            else{
                continue;
            }
        }
        if(k!="")
        {
            reverse(k.begin(),k.end());
            if(lemme==1)
            {
            res=res+" "+k;
            }
            else{
                res=k;
            }
        }
        
        return res;
    }
};
