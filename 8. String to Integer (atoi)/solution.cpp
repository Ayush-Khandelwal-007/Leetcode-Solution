class Solution
{
public:
    int myAtoi(string s)
    {
        long long ans = 0;
        bool isNegative = false;
        while (s[0] == ' ')
        {
            int n = s.length();
            s = s.substr(1, n - 1);
        }
        if (s[0] == '-')
        {
            isNegative = true;
            int n = s.length();
            s = s.substr(1, n - 1);
        }
        else if (s[0] == '+')
        {
            isNegative = false;
            int n = s.length();
            s = s.substr(1, n - 1);
        }
        while (s[0] >= '0' && s[0] <= '9')
        {
            int rem = s[0] - '0';
            ans = (ans * 10) + rem;

            if (isNegative)
            {
                if (INT_MIN>=(-1)*ans)
                    return INT_MIN;
            }
            else
            {
                if (ans >= INT_MAX)
                    return INT_MAX;
            }

            int n = s.length();
            s = s.substr(1, n - 1);
        }
        if (isNegative)
        {
            ans = -1 * ans;
            if (ans <= INT_MIN)
                return INT_MIN;
            return ans;
        }
        else
        {
            if (ans >= INT_MAX)
                return INT_MAX;
            return ans;
        }
    }
};