
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
   vector<int> temp(n+1,0);
    pair<int,int> p;
    temp[0]=1;
    for(auto i:arr){
        temp[i]++;
    }
    int mis;
    int rep;
    
    for(int i=1;i<temp.size();i++){
        if(temp[i]==0)mis=i;
        if(temp[i]>1)rep=i;
    }
    p.first=mis;
    p.second=rep;
    return p;
}
