class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1;i<=n;i++){
            string ansSt="";
            if(i%3!=0 && i%5!=0)ans.push_back(to_string(i));
            else{
                if(i%3==0)ansSt+="Fizz";
                if(i%5==0)ansSt+="Buzz";
                ans.push_back(ansSt);
            }
        }
        return ans;
    }
};