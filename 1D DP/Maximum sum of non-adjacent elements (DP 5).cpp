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