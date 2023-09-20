class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp=a;
        while(a.length()<b.length()) a+=temp;
        if(a.find(b)!=string::npos)return a.length()/temp.length();
        a+=temp;
        if(a.find(b)!=string::npos)return a.length()/temp.length();
        return -1; 
        
    }
};
