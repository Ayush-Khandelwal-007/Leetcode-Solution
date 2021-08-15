class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> myMap(26,0);
        for(int i=0;i<s.length();i++){
            myMap[s[i]-'a']++;
        }
         for(int i=0;i<t.length();i++){
            if(--myMap[t[i]-'a']<0)return t[i];
        }
        return t[t.length()-1];
    }
};