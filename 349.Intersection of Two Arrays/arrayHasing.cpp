class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<bool>c1(1001,false);
        vector<int> ans;
        for(auto it:nums1){
            c1[it]=true;
        }
        for(auto it:nums2){
            if(c1[it]){
                ans.push_back(it);
                c1[it]=false;
            }
        }
        return ans;
    }
};