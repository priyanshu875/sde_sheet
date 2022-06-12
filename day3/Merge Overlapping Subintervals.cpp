#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &in)
{
    // Write your code here.
    
    vector<int> temp;
    vector<vector<int>> ans;
    sort(in.begin(),in.end());
    temp.push_back(in[0][0]);
    temp.push_back(in[0][1]);
    for(int i=1;i<in.size();i++){
        if(in[i][0]<=temp[1] && in[i][1]>temp[1]){
            temp[1]=in[i][1];
        }
        else if(in[i][0]>temp[1]){
            ans.push_back(temp);
            temp[0]=in[i][0];
            temp[1]=in[i][1];
        }
    }
    ans.push_back(temp);

    return ans;
}
