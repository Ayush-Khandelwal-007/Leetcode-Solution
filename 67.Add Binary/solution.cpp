class Solution {
public:
    string addBinary(string a, string b) {
      string ans="";
      if(a.length()>b.length()){
        string ans=b;
        b=a;
        a=ans;
      }
      while(a.length()!=b.length()){
        a='0'+a;
      }
      int i=a.length()-1;
      int carry =0;
      while(i>=0){
        int x=(a[i]-'0');
        int y=(b[i]-'0');
        
        int num =x+y+carry;
        
        ans=to_string(num%2)+ans;
        carry=num/2;
        i--;
      }
      if(carry==1){
        ans=to_string(1)+ans;
      }
      return ans;
    }
};


////////////////////////////////////////////////////////////////////////Slightly better Solution.
// class Solution {
// public:
//     string addBinary(string a, string b) {
//       int i=a.length()-1,j=b.length()-1;
//       string ans="";
//       int carry =0;
//       while(i>=0 || j>=0){
//         int x= (i>=0) ? (a[i]-'0') : 0;
//         int y= (j>=0) ? (b[j]-'0') : 0;
//         int num =x+y+carry;
//         ans=to_string(num%2)+ans;
//         carry=num/2;
//         i--;j--;
//       }
//       if(carry==1){
//         ans='1'+ans;
//       }
//       return ans;
//     }
// };