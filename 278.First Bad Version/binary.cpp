// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int hi=n,lo=1,mid;
        while(lo<hi){
            mid= lo + (hi-lo)/2;
            bool m1=isBadVersion(mid),m2=isBadVersion(mid-1);
            if(m1&&!m2)return mid;

            if(m1)hi=mid;
            else lo=mid+1;
        }
        return lo;
    }
};