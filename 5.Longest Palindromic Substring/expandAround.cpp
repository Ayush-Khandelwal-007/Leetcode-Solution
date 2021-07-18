void findLongestPD(string str, int i, int &maxLength,int &start)
{
        int len = str.length();
        int low = i - 1;
        int high = i;
        while(low >= 0 && high < len && str[low] == str[high]){
                low--;
                high++;
        }
        low++;high--;
        int length = high - low + 1;
        if(str[low] == str[high] && length>maxLength){
            maxLength = length;
            start = low;
        }
        low = i - 1;
        high = i + 1;
        while(low >= 0 && high < len && str[low] == str[high]){
                low--;
                high++;
        }
        low++;high--;
        length = high - low + 1;
        if(str[low] == str[high] && length>maxLength){
            maxLength = length;
            start = low;
        }
}


class Solution {
public:
    string longestPalindrome(string s) {
    int maxLength = 1;
 
    int start = 0;
    int len = s.length();
  
    for (int i = 1; i < len; ++i) {
        findLongestPD(s, i, maxLength, start);
    }
    return s.substr(start, maxLength);
    }
};