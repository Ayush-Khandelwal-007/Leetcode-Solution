class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (carry == 0)
                break;
            else
            {
                digits[i] = digits[i] + 1;
                carry = digits[i] / 10;
                digits[i] = digits[i] % 10;
            }
        }
        if (carry == 1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

/////////////////////////////////////////////////////////////////Cleaner approach.
// class Solution
// {
// public:
//     vector<int> plusOne(vector<int> &digits)
//     {
//         for (int i = digits.size() - 1; i >= 0; i--)
//         {

//             if (digits[i] == 9)
//             {
//                 digits[i] = 0;
//             }
//             else
//             {
//                 digits[i] += 1;
//                 return digits;
//             }
//         }
//         digits[0] = 1;
//         digits.push_back(0);
//         return digits;
//     }
// };