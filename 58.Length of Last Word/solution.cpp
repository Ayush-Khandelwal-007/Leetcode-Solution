class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s.length()>0 && s[s.length()-1]==' '){
          s=s.substr(0,s.length()-1);
        }
        int ans=0;
        for(int i=s.length()-1;i>=0;i--){
          if(s[i]!=' ')ans++;
          else{
            break;
          }
        }
      return ans;
    }
};