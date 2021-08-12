class Solution {
public:
    bool isHappy(int n) {
        int check=n;
        map<int,bool>hashMap;
        do{
            hashMap[check]=true;
            if(check==1)return true;
            int ans=0;
            while(check){
                ans+=(check%10)*(check%10);
                check/=10;
            }
            check=ans;
        }
        while(hashMap[check]==false);
        return false;
    }
};