// Recursion

class Solution{
public:	
     int f(int ind,int *arr){
         if(ind==0)return arr[0];
         if(ind<0)return 0;
         int pick=arr[ind]+f(ind-2,arr);
         int notPick=0+f(ind-1,arr);
         return max(pick,notPick);
     }
	int findMaxSum(int *arr, int n) {
	    return f(n-1,arr);
	}
};

// Memoization 


class Solution{
public:	
     int f(int ind,int *arr,vector<int>&dp){
         if(ind==0)return arr[0];
         if(ind<0)return 0;
         if(dp[ind]!=-1)return dp[ind];
         int pick=arr[ind]+f(ind-2,arr,dp);
         int notPick=0+f(ind-1,arr,dp);
         return dp[ind]=max(pick,notPick);
     }
	int findMaxSum(int *arr, int n) {
	    vector<int>dp(n,-1);
	    return f(n-1,arr,dp);
	}
};

// Tabulation

class Solution{
public:	
     int f(int n,int *arr,vector<int>&dp){
         dp[0]=arr[0];
        for(int i=1;i<n;i++){
            int pick=arr[i];
            if(i>1){
                 pick+=dp[i-2];
            }
                
            int notPick=dp[i-1];
            dp[i]=max(pick,notPick);
        }
      
        return dp[n-1];

    }
    
    
    
	int findMaxSum(int *arr, int n) {
	    vector<int>dp(n,-1);
	    return f(n,arr,dp);
	}
};