#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &n, int t){
   // Write your code here.
    vector<vector<int>> ans;
    vector<int> temp(2,0);

    for(int i=0;i<n.size();i++){
        int x=t-n[i];
        for(int j=i+1;j<n.size();j++){
            if(x==n[j]){
                temp[0]=n[i];
                temp[1]=x;
                sort(temp.begin(),temp.end());
                ans.push_back(temp);
            }
            
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
    
}
