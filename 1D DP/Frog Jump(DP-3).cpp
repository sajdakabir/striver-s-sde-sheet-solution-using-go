// recur (top down)
class Solution {
  public:
  int f(int i, vector<int>& arr){
      if(i==0)return 0;
      int jump1=f(i-1,arr)+abs(arr[i]-arr[i-1]);
      int jump2=INT_MAX;
      if(i>1){
           jump2=f(i-2,arr)+abs(arr[i]-arr[i-2]);
      }
      return min(jump1,jump2);
  }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        
        return f(n-1,height);
    }
};
// memoization (top down)

class Solution {
  public:
  int f(int i, vector<int>& arr,vector<int>&dp){
      if(i==0)return 0;
      if(dp[i]!=-1)return dp[i];
      int jump1=f(i-1,arr,dp)+abs(arr[i]-arr[i-1]);
      int jump2=INT_MAX;
      if(i>1){
           jump2=f(i-2,arr,dp)+abs(arr[i]-arr[i-2]);
      }
      return dp[i]=min(jump1,jump2);
  }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int>dp(n+1,-1);
        
        return f(n-1,height,dp);
    }
};
// tabulation (bottom up)

