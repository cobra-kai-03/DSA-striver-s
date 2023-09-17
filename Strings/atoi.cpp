class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int pos=0,neg=0;
        while(s[i]==' ' )
        {
            i++;
        }
        if(s[i]=='+')
        {
            pos++;
            i++;
        }
        if(s[i]=='-')
        {
            neg++;
            i++;
        }
        if(pos && neg) return 0;
        double num=0;
        while(s[i]>='0' && s[i]<='9' && i<s.size())
        {
            num=num*10;
            num+=s[i]-'0';
            i++;
        }
        if(neg>0)
        {
            num*=-1;
        }
        if(num>2147483647)
        {
            num=2147483647;
        }
        if(num<-2147483648)
        {
            num=-2147483648;
        }
        return num;
    }
};
