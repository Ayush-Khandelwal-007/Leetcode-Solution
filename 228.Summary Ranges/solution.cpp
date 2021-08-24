class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size()==0){
            return ans;
        }
        string s="";
        int cp=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>1+nums[i-1]){
                if(cp==nums[i-1])ans.push_back(to_string(cp));
                else ans.push_back(to_string(cp)+"->"+to_string(nums[i-1]));
                cp=nums[i];
            }
        }
        if(cp==nums[nums.size()-1])ans.push_back(to_string(cp));
        else ans.push_back(to_string(cp)+"->"+to_string(nums[nums.size()-1]));
        
        return ans;
    }
};