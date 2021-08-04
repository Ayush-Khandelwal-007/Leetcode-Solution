class Solution {
public:
    bool isPalindrome(string s) {
      transform(s.begin(), s.end(), s.begin(), ::tolower);
      s=removeSpecialCharacter(s);
      for(int i = 0; i < s.size()/2; i++){
        if(s[i]!=s[s.size()-1-i])return false;
      }
      return true;
    }
  
    string removeSpecialCharacter(string s){
      int j = 0;
      for (int i = 0; i < s.size(); i++) {

          if ((s[i] >= 'A' && s[i] <= 'Z') ||
              (s[i] >='a' && s[i] <= 'z') ||
              (s[i] >= '0' && s[i]<= '9'))
          {
              s[j] = s[i];
              j++;
          }
      }
      return s.substr(0, j);
    }
};