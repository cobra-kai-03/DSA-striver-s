#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int min=prices[0];
    int diff=0,d=0;

    for(int i=1;i<n;i++)
    {
        if(prices[i]>min)
        {
            diff=prices[i]-min;
        }
        if(prices[i]<min)
        {
            min=prices[i];
        }
        if(diff>d)
        {
            d=diff;
        }
    }
    return d;
    
}
