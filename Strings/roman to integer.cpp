int romanToInt(string s) {
    // Write your code here
    map<char,int>m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    int num=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(m[s[i]]<m[s[i+1]])
        {
            num=num-m[s[i]];
        }
        else{
            num=num+m[s[i]];
        }
    }
    num+=m[s[s.size()-1]];
    return num;
}
