class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int data;
      unordered_map<int,int>mp;
      for(auto i:nums)
      {
          mp[i]++;
      }
       for(auto i:mp)
      {
         if(i.second==1){
             data=i.first;

          }
      }
      return data;
    }
};