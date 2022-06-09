#include <bits/stdc++.h> 


void fun(vector<vector<int>> &matrix, int i, int j){
   int n=matrix.size();
    int m=matrix[0].size();
    
    for(int x=0;x<m;x++){
        matrix[i][x]=0;
    }
    for(int x=0;x<n;x++){
        matrix[x][j]=0;
    }
}

void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> temp(n,vector<int>(m));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[i][j]=matrix[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(temp[i][j]==0){
                fun(matrix,i,j);
            }
        }
    }
    

}