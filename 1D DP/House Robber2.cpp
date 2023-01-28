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
        vector<int>arr1;
        vector<int>arr2;
        int n=nums.size();
        if(n==1)return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0)arr1.push_back(nums[i]);
            if(i!=n-1)arr2.push_back(nums[i]);
        }
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        int ans1=f(n-2,arr1,dp1);
        int ans2=f(n-2,arr2,dp2);
        return max(ans1,ans2);
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
        vector<int>arr1;
        vector<int>arr2;
        int n=nums.size();
        if(n==1)return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0)arr1.push_back(nums[i]);
            if(i!=n-1)arr2.push_back(nums[i]);
        }
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        int ans1=f(n-1,arr1,dp1);
        int ans2=f(n-1,arr2,dp2);
        return max(ans1,ans2);
    }
};