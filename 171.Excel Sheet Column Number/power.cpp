class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0,size = columnTitle.size();
        
        for(int i=0;i<size;i++)
        {
            result += (columnTitle[i]-'A'+1)*pow(26,size-i-1);
        }
        return result;
    }
};