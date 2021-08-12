class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>c1(1001,0);
        vector<int> ans;
        for(auto it:nums1){
            c1[it]++;
        }
        for(auto it:nums2){
            if(c1[it]>0){
                ans.push_back(it);
                c1[it]--;
            }
        }
        return ans;
    }
};