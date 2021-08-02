class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int ans=INT_MIN;
      int n=nums.size();
      for(int i=1;i<n;i++){
        nums[i]+=nums[i-1];
      }
      for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
          if(i>0)ans=max(ans,nums[j]-nums[i-1]);
          else{
            ans=max(ans,nums[j]);
          }
        }
      }
      return ans;
    }
};