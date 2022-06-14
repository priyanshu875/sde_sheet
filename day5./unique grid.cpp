#include <bits/stdc++.h> 
int fun(int i, int j, int m, int n,vector<vector<int>> &dp){

    if(i==m-1 && j==n-1)return 1;
    if(i>=m || j>=n)return 0;

    if(dp[i][j]!=-1)return dp[i][j];
    int right=fun(i,j+1,m,n,dp);
    int down=fun(i+1,j,m,n,dp);

    return dp[i][j]=right+down;
}

int uniquePaths(int m, int n) {
	// Write your code here.
    vector<vector<int>> dp(m+1,vector<int>(n,-1));
    return fun(0,0,m,n,dp);
}
