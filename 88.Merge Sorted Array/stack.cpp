class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      stack <int> myStack;
      int i=0,j=0;
      while(i<m && j<n){
        if(nums1[i]<nums2[j]){
          myStack.push(nums1[i]);
          i++;
        }
        else{
          myStack.push(nums2[j]);
          j++;
        }
      }
      while(j<n){
        myStack.push(nums2[j]);
          j++;
      }
      while(i<m){
        myStack.push(nums1[i]);
          i++;
      }
      for(int i=nums1.size()-1;i>=0;i--){
        nums1[i]=myStack.top();
        myStack.pop();
      }
    }
};