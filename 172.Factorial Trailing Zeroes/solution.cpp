class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0,num=5;
        while(n/num){
            ans+=n/num;
            num*=5;
        }
        return ans;
    }
};