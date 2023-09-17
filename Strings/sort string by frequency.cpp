class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(auto i:s)
        {
            m[i]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:m)
        {
            pq.push({i.second,i.first});
        }
        pair<int,char>p;
        int j=0;
        while(!pq.empty())
        {
            p=pq.top();
            pq.pop();
            while(p.first--)
            {
                s[j++]=p.second;
            }
        }
    return s;
    }
};
