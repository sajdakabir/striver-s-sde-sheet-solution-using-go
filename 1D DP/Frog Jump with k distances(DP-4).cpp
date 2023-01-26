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

// memoization
class Solution {
  public:
   int f(int i,int k, vector<int>& arr,vector<int>&dp){
      if(i==0)return 0;
      if(dp[i]!=-1)return dp[i];
     int minSteps=INT_MAX;
    for(int j=1;j<=k;j++){
   
        if(i-j>=0){
           int jump=f(i-j,k,arr,dp)+abs(arr[i]-arr[i-j]);
             minSteps=min(jump,minSteps);
        }
       
        
    }
    return dp[i]=minSteps;
      
  }
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        vector<int>dp(n,-1);
        return f(n-1,k,height,dp);
    }
};


// tabulation (bottom up)

class Solution {
  public:
   int f(int n,int k, vector<int>& arr,vector<int>&dp){
      dp[0]=0;
      for(int i=1;i<n;i++){
     int minSteps=INT_MAX;
    for(int j=1;j<=k;j++){
   
        if(i-j>=0){
           int jump=dp[i-j]+abs(arr[i]-arr[i-j]);
             minSteps=min(jump,minSteps);
        }
       
        
    }
    dp[i]=minSteps;
      }
    return dp[n-1];
      
  }
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        vector<int>dp(n,-1);
        return f(n,k,height,dp);
    }
};
