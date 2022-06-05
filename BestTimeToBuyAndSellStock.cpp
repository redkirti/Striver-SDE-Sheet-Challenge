#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mx = prices[prices.size()-1], ans=0;
    for(int i=prices.size()-2; i>=0; i--){
        if(ans<(mx-prices[i]))
            ans = mx-prices[i];
        if(prices[i]>mx)
            mx = prices[i];
    }
    return ans;
}