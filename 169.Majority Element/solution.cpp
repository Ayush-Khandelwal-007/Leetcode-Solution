class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int presentMaj=nums[0],count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==presentMaj){
                count++;
            }
            else{
                if(count==1){
                    presentMaj=nums[i];
                }
                else{
                    count--;
                }
            }
        }
        return presentMaj;
    }
};