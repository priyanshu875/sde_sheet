#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
    map<int,int> mp;
    int l=0,r=0,len=0;
    while(r<s.length()){
        if(mp.find(s[r])!=mp.end() && mp[s[r]]>=l && mp[s[r]]<r){
            l=mp[s[r]]+1;
        }
        mp[s[r]]=r;
        len=max(len,r-l+1);
        r++;
    }
    return len;
}
