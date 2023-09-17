class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        map<char,int>first;
        map<char,int>second;
        for(int i=0;i<s.size();i++)
        {
            if(first[s[i]] && first[s[i]]!=t[i]) return false;
            if(second[t[i]] && second[t[i]]!=s[i]) return false;
            first[s[i]]=t[i];
            second[t[i]]=s[i];
        }
        return true;
    }
};
