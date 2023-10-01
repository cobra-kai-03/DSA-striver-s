class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0 || g.size()==0) return 0;
        sort(g.begin(),g.end());

       // if(s.size()>=1)
        
        sort(s.begin(),s.end());
        
        int cnt=0;
        for(int i=0;cnt<g.size() && i<s.size();i++){
            if(s[i]>=g[cnt]){
                cnt++;
            }       
        }
        return cnt;

    }
};
