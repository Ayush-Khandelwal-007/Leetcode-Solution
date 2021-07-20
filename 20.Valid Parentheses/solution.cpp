class Solution {
public:
    bool isValid(string s) {
      stack<char> remaining;
      
      for(int i=0;i<s.length();i++){
        if(s[i]=='('|| s[i]=='[' || s[i]=='{'){
          remaining.push(s[i]);
        }
        else{
          if(s[i]==')' && !remaining.empty() && remaining.top()=='('){
            remaining.pop();
          }
          else if(s[i]=='}' && !remaining.empty() && remaining.top()=='{'){
            remaining.pop();
          }
          else if(s[i]==']' && !remaining.empty() && remaining.top()=='['){
            remaining.pop();
          }
          else{
            return false;
          }
        }
      }
      return remaining.empty();
    }
};