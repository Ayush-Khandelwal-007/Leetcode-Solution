class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if (map.find(nums[i]) == map.end()){
                map[nums[i]]=i;
            }
            else{
                if(i-map[nums[i]]<=k)return true;
                map[nums[i]]=i;
            }
        }
        for(auto it:map){
            cout<<it.first<<" "<<it.second<<endl;
        }
        return false;
    }
};