class Solution {
public:
  vector<int> getRow(int rowIndex) {
    vector<int> ans;
    for(int i=0;i<=rowIndex;i++) ans.push_back(comb(rowIndex,i));
    return ans;
  }
  int comb(int n, int r){
    if(r==0||r==n) return 1;
    if(r>n-r) r=n-r;
    long long ans=1;
    for(int i=0;i<r;i++){
        ans*=(n-i);
        ans/=(i+1);
    }
    return ans;
  }
};