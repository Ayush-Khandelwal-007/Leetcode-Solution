class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool>my;
        for(int i=0;i<nums.size();i++){
            if(my[nums[i]]==true)return true;
            else my[nums[i]]=true;
        }
        return false;
    }
};