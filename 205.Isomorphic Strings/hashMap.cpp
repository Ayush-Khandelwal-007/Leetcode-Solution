class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> myMap,myMap1;
        for (int i = 0; i < s.length(); ++i) {
            
            if (!myMap[s[i]]  && !myMap1[t[i]]) {
                myMap[s[i]] = t[i];
                myMap1[t[i]] = s[i];
            }
        
            else if (!(myMap[s[i]] == t[i] && myMap1[t[i]] == s[i])) {
                return false;
            }
        }
        return true;
    }
};