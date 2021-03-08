class Solution {
public:
    int mySqrt(int x) {
      if(x==1||x==0){return x;}
      long long i=2;
      while (i * i <= x)
        {
            i += 1;
        }
      return i - 1;   
    }
};