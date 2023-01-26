// User function Template for C++


long long int m=1e9+7;

    long long int dp[100001];

    

class Solution {

  public:

    long long int topDown(int n) {

        if(n==0 || n==1) return n;

        if(dp[n]!=-1) return dp[n]%m;

        

        return dp[n]=(topDown(n-2)+topDown(n-1))%m;

    }
      long long int bottomUp(int n) {

        long long int d[n+1];

        d[0]=0;

        if(n>=1) d[1]=1;

        for(int i=2;i<=n;i++){

            d[i]=(d[i-1]+d[i-2])%m;

            d[i]%=m;

        }

        return d[n];

    }
};