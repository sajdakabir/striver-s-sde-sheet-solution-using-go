// Recursion


class Solution {
public:
    int f(int i,vector<int>&nums){
        if(i==0)return nums[0];
        if(i<0)return 0;

        int rob=nums[i]+f(i-2,nums);
        int nonRob=0+f(i-1,nums);
        return max(rob,nonRob);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        return f(n-1,nums);
    }
};




// Memoization

class Solution {
public:
    int f(int i,vector<int>&nums,vector<int>&dp){
        if(i==0)return nums[0];
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int rob=nums[i]+f(i-2,nums,dp);
        int nonRob=0+f(i-1,nums,dp);
        return dp[i]=max(rob,nonRob);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return f(n-1,nums,dp);
    }
};

// Tabulation


class Solution {
public:
    int f(int n,vector<int>&nums,vector<int>&dp){
        dp[0]=nums[0];
      
        for(int i=1;i<n;i++){
              int rob=nums[i];
            if(i>1){
                rob+=dp[i-2];
            }
        int nonRob=0+dp[i-1];
        dp[i]=max(rob,nonRob);
        }

       return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return f(n,nums,dp);
    }
};