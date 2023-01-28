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