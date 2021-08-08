class Solution {
public:
    bool isPerfectSquare(int n) {
        int i=0,j=n;
        while(i<=j)
        {
            long long mid=i+(j-i)/2;
            if(mid*mid==n)
                return true;
            else if(mid*mid<n)
                i=mid+1;
            else
                j=mid-1;
        }
        return false;
    }
};