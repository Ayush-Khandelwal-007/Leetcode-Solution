class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
      vector< pair<int,int> > arr;
      for(int i=0;i<n;i++){
        arr.push_back(make_pair(prices[i],i));
      }
      sort(arr.begin(),arr.end());
      return check(arr,0,n-1);
    }
    int check(vector< pair<int,int> > arr,int i,int j){
      if(i>=j)return 0;
      if(arr[i].second<arr[j].second) return arr[j].first-arr[i].first;
      else return max(check(arr,i+1,j),check(arr,i,j-1));
    }
};