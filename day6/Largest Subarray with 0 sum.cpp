#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
int n=arr.size();
  // Write your code here
    
    map<int,int> mp;
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==0){
            ans=max(ans,i+1);
        }
        else{
            if(mp.find(sum)!=mp.end()){
                ans=max(ans,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
    }
    return ans;

}
