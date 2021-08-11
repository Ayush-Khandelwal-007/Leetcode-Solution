class Solution {
public:
    string convertToTitle(int columnNumber) {
       string ans;
        while(columnNumber!=0){
            int rem = columnNumber%26;
            if(rem==0){
                ans = 'Z'+ans;
                columnNumber = columnNumber/26;
                columnNumber--;
            }
            else{
               ans = char(rem+64) + ans;
                columnNumber = columnNumber/26;
            }
            
        }
        return ans;
    }
};