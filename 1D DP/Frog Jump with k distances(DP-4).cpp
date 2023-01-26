// Recursion

class Solution {
  public:
   int f(int i,int k, vector<int>& arr){
      if(i==0)return 0;
     int minS=INT_MAX;
    for(int j=1;j<=k;j++){
   
        if(i-j>=0){
           int s=f(i-j,k,arr)+abs(arr[i]-arr[i-j]);
             minS=min(s,minS);
        }
       
        
    }
    return minS;
      
  }
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        return f(n-1,k,height);
    }
};