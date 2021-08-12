class Solution {
public:
    string reverseVowels(string s) {
        stack<char> mySt;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i]))mySt.push(s[i]);
        }
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                s[i]=mySt.top();
                mySt.pop();
            }
        }
        return s;
    }
    bool isVowel(char ch){
        return ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U';
    }
};