class Solution {
public:
       string toHex(int num) {
        unsigned int a = num;
        string ans;
        string hexMap = "0123456789abcdef";
        if (a==0) return "0";
        if (a <0){
            a = pow(2,32) - (-1*a);
        }
        while(a > 0){
            ans=hexMap[a%16]+ans;
            a/=16;
        }
        return ans;
    }
};