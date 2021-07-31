bool checkRepeat(string &s, int start, int end)
{
    vector<int> charSet(128);

    for (int i = start; i <= end; i++)
    {
        char c = s[i];
        charSet[c]++;
        if (charSet[c] > 1)
        {
            return false;
        }
    }

    return true;
}

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                if (checkRepeat(s, i, j)) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};

// will probably not be accepted.