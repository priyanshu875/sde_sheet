#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> temp(n,vector<long long int>(n));
    temp[0].resize(1,1);
    temp[0][0]=1;
    if(n>1){
        temp[1].resize(2,1);
        temp[1][0]=1;
        temp[1][1]=1;
    }
    
    if(n>2){
        for(int i=2;i<n;i++){
            temp[i].resize(i+1);
            temp[i][0]=1;
            temp[i][i]=1;
            for(int j=1;j<i;j++){
                temp[i][j]=temp[i-1][j-1]+temp[i-1][j];
            }
        }
    }
    return temp;

}
