// recuesion
class Solution {
  public:
  int f(int day,int last,vector<vector<int>>&points){
      if(day==0){
          int maxi=0;
          for(int i=0;i<3;i++){
              if(i!=last){
                  maxi=max(maxi,points[0][i]);
              }
          }
          return maxi;
      }
      
      int maxi=0;
      for(int i=0;i<3;i++){
          if(i!=last){
              int active=points[day][i]+f(day-1,i,points);
              maxi=max(maxi,active);
          }
      }
      return maxi;
  }
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here

      
        return f(n-1,3,points);
    }
};


// memoization

class Solution {
  public:
  int f(int day,int last,vector<vector<int>>&points,vector<vector<int>>&dp){
      if(dp[day][last]!=-1)return dp[day][last];
      if(day==0){
          int maxi=0;
          for(int i=0;i<3;i++){
              if(i!=last){
                  maxi=max(maxi,points[0][i]);
              }
          }
          return dp[0][last]=maxi;
      }
      
      int maxi=0;
      for(int i=0;i<3;i++){
          if(i!=last){
              int active=points[day][i]+f(day-1,i,points,dp);
              maxi=max(maxi,active);
          }
      }
      return dp[day][last]=maxi;
  }
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        vector<vector<int>>dp(n,vector<int>(4,-1));
      
        return f(n-1,3,points,dp);
    }
};