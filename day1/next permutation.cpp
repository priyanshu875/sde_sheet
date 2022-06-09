#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    
    int ind_one;
    int i;
    for(i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            ind_one=i;
            break;
        }
    }
    if(i<0){
        reverse(permutation.begin(),permutation.end());
    }
    else{
        for(i=n-1;i>=0;i--){
            if(permutation[i]>permutation[ind_one]){
                swap(permutation[i],permutation[ind_one]);
                break;
            }
        }
        reverse(permutation.begin()+ind_one+1,permutation.end());
    }
    return permutation;
    
}