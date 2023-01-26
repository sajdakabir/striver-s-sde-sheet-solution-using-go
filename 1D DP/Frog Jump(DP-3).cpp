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


// tabulation (bottom up)

