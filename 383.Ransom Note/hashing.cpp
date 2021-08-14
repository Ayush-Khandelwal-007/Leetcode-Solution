class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> mapp(26,0);
        for(int i=0;i<magazine.length();i++){
            mapp[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(mapp[ransomNote[i]-'a']==0)return false;
            mapp[ransomNote[i]-'a']--;
        }
        return true;
    }
};