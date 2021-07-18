bool isPalindrome(string s){
  for(int i=0;i<s.length()/2;i++){
    if(s[i]!=s[s.length()-1-i])return false;
  }
  return true;
}

class Solution {
public:
    string longestPalindrome(string s) {
      int maxlen=-1;
      string ans="";
        for(int i=0;i<s.length();i++){
          for(int j=1;j<=s.length()-i;j++){
              if(j>maxlen && isPalindrome(s.substr(i,j))){
                ans=s.substr(i,j);
                maxlen=j;
              }
          }
        }
      return ans;
    }
};

// will probably not be accepted.