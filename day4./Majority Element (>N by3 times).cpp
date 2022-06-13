#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int count1=0;
    int count2=0;
    int num1=-1;
    int num2=-1;
    for(auto i:arr){
        if(i==num1)count1++;
        else if(i==num2)count2++;
        else if(count1==0){
            num1=i;
            count1=1;
        }
        else if(count2==0){
            num2=i;
            count2=1;
        }
        else{
            count1--;
            count2--;
        }
    }
    
    count1=0;
    count2=0;
    for(auto i:arr){
        if(i==num1)count1++;
        else if(i==num2)count2++;
    }

    vector<int> ans;
    if(count1>arr.size()/3)ans.push_back(num1);
    if(count2>arr.size()/3)ans.push_back(num2);
    return ans;

}
