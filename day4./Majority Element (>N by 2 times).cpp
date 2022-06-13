#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    map <int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int maxi=INT_MIN,max_e=-1;
    for(auto i:mp){
        if(i.second>n/2 &&  maxi<i.second){
            maxi=i.second;
            max_e=i.first;
        }
        
    }
    return max_e;
}
