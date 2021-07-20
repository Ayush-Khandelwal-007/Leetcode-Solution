class Solution {
public:
    string longestCommonPrefix(vector<string>& A) {
            int n=A.size();
    int len=INT_MAX,index=0;;
    string ans="";
    int flag=1;
    for(int i=0;i<n;i++){
        int plen=A[i].length();
        if(plen<len){
            index=i;
            len=plen;
        }
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<n;j++){
            if(A[j][i]!=A[index][i]){
                flag=0;
            }
        }
        if(flag){
            ans+=A[index][i];
        }
        else{
            break;
        }
    }
    return ans;
    }
};