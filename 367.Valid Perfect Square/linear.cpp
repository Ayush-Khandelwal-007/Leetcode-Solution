class Solution {
public:
    bool isPerfectSquare(int n) {
        for(long long i=0;i*i<=n;i++){
          if(i*i==n)return true;
        }
      return false;
    }
};