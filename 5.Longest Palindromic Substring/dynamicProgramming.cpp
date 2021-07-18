class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.length();
        int startIndex = -1;
        int maxLength = -1;
        vector<vector<int> > dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
            dp[i][i] = 1;
        startIndex = 0;
        maxLength = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                dp[i][i + 1] = 1;
                maxLength = 2;
                startIndex = i;
            }
        }
        for (int k = 3; k <= n; k++)
        {
            for (int start = 0; start < n - k + 1; start++)
            {
                int end = start + k - 1;
                if (s[start] == s[end] && dp[start + 1][end - 1] == 1)
                {
                    dp[start][end] = 1;
                    if (k > maxLength)
                    {
                        startIndex = start;
                        maxLength = k;
                    }
                }
            }
        }
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        return s.substr(startIndex, maxLength);
    }
};