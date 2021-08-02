class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if(nums.size()==0)return 0;
      int j=0;
      while(j<nums.size()-1){
        if(nums[j]==nums[j+1]){
          vector<int>::iterator it=nums.begin()+j;
          nums.erase(it); 
        }
        else{
          j++;
        }
      }
      return nums.size();
    }
};