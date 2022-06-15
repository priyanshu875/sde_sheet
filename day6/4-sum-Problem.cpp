#include <bits/stdc++.h> 
string fourSum(vector<int> n, int t, int no) {
    // Write your code here.
    sort(n.begin(),n.end());
        
    int i=0;
    int j;

    while(i<=n.size()-4){
        int n_t=t-n[i];
        j=i+1;
        while(j<=n.size()-3){
            int nn_t=n_t-n[j];
            int k=j+1;
            int l=n.size()-1;
            while(k<l){
                int sum=n[k]+n[l];
                if(sum==nn_t){
                    return "Yes";
                }
                else if(sum>nn_t)l--;
                else k++;
            }
            j++;
        }
        i++;
    }
    return "No";
}
