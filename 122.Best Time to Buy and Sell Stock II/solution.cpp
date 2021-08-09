class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n = prices.size();
      int isbought=0,ans=0;
      int min=INT_MAX;
      for(int i=0;i<n;i++){
        if(isbought){
          if(prices[i]<=min){
            min=prices[i];
          }
          else if(i==n-1 || prices[i]>prices[i+1]){
            ans+=(prices[i]-min);
            min=INT_MAX;
          }
        }
        else{
          min=prices[i];
          isbought=1;
        }
      }
      return ans;
    }
};