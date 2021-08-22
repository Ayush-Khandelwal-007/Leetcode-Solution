class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)return ans;
        return func(digits);
    }
    vector<string> func(string digits){
        if(digits.length()==0)return vector<string>(1,"");
        map<char,string> alphas;
        alphas['2']="abc";
        alphas['3']="def";
        alphas['4']="ghi";
        alphas['5']="jkl";
        alphas['6']="mno";
        alphas['7']="pqrs";
        alphas['8']="tuv";
        alphas['9']="wxyz";
        vector<string> temp,ans;
        temp=func(digits.substr(1,digits.length()-1));
        for(int i=0;i<alphas[digits[0]].length();i++){
            for(int j=0;j<temp.size();j++){
                ans.push_back(alphas[digits[0]][i]+temp[j]);
            }
        }
        return ans;
    }
};