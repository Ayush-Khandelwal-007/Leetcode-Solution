class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0,single=0;
        vector<int>myMap(128,0);
        for(int i=0;i<s.length();i++){
            if(myMap[s[i]]==0){
                myMap[s[i]]=1;
                single++;
            }
            else{
                myMap[s[i]]=0;
                single--;ans++;
            }
        }
        ans*=2;
        if(single>0)ans++;
        return ans;
    }
};