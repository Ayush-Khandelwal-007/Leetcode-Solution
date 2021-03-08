class Solution {
public:
    int mySqrt(int x) {
    int low=0;
    int high=x;
    
    int res;
    
    while(low<=high){
      long long  int mid=(high-low)/2 +low;
        if(mid*mid==x)
            return mid;
        else
            if(mid*mid<x)
            {
                res=mid;
                low=mid+1;
            }
        else
            high=mid-1;
    }
    
    
    return res;
    }
};