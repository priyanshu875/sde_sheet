#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
     map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])!=mp.end())return arr[i];
            else mp[arr[i]]++;
        }
        return -1;
}
