class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      if(nums.size()==1)return nums[0];
      int presentSum=0,ans=INT_MIN;
      for(int i=0;i<nums.size();i++){
        presentSum+=nums[i];
        if(presentSum<0){
          presentSum=0;
          ans=max(ans,nums[i]);
        }
        else{
          ans=max(ans,presentSum);
        }
      }
      return ans;
    }
};