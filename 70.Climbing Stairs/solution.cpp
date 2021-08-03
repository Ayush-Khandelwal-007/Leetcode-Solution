class Solution {
public:
    int climbStairs(int n) {
      vector <long long> ans(46,0);
      ans[0]=0;
      ans[1]=1;
      ans[2]=2;
      ans[3]=3;
      for(int i=4;i<46;i++){
        ans[i]=ans[i-1]+ans[i-2];
      }
      return ans[n];
    }
};