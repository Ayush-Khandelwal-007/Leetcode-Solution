class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int ans = 0;
        for (int i = 0; i < prices.size(); i++) {
            int profit=prices[i] - min;
            if (profit < 0)
                min = prices[i];
            else if ( profit> ans)
                ans = profit;
        }
        return ans;
    }
};