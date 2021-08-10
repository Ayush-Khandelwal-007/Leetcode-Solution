class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
        vector<int>ans;
        for(int i=0;i<n-1;i++){
            int key=target-a[i],low=i+1,high=n;
            while(low<high){
                int mid=(high+low)/2;
                if(a[mid]==key){
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    return ans;
                }
                else if(a[mid]<key){
                    low=mid+1;
                }
                else{
                    high=mid;
                }
            }
        }
        return ans;
    }
};