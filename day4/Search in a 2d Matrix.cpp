#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    
    int low=0;
    int high=((m)*(n))-1;

    while(low<=high){
        int mid=(low+high)/2;

        int mid_ele=mat[mid/(n)][mid%(n)];
        if(mid_ele==target)return true;

        if(mid_ele>target){
            high=mid-1;
        }
        else low=mid+1;
    }
    return false;
}