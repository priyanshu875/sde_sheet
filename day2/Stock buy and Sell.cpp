#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int min_buy=INT_MAX,curr_pro=0,max_pro=INT_MIN;
    
    for(int i=0;i<prices.size();i++){
        min_buy=min(min_buy,prices[i]);
        curr_pro=prices[i]-min_buy;
        max_pro=max(max_pro,curr_pro);
    }
    return max_pro;
}