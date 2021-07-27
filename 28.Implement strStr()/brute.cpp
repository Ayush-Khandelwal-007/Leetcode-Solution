class Solution {
public:
    int strStr(string haystack, string needle) {
      if(haystack.length()<needle.length())return -1;
      if(needle.length()==0)return 0;
      for(int i=0;i<=haystack.length()-needle.length();i++){
        if(haystack[i]==needle[0]){
          if(check(haystack,needle,i)){
            return i;
          }
        }
      }
      return -1;
    }
    bool check(string haystack, string needle,int start){
      for(int i=0;i<needle.length();i++){
        if(haystack[start+i]!=needle[i])return false;
      }
      return true;
    }
};