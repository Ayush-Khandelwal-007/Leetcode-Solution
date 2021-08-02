class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)return 0;
        vector<int>::iterator it=nums.begin();
        int j=0;
        while(j<nums.size()){
          if(nums[j]==val){
            nums.erase(it+j); 
          }
          else{
            j++;
          }
        }
        return nums.size();
      }
};