class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        vector<vector<string>> hours(4), minutes(6);
        if(turnedOn>8)return ans;
        
        for(int i=0; i<12; ++i) {
            string s {to_string(i)+":"};
            bitset<4> b(i);
            hours[b.count()].push_back(s);
        }
        
        for(int i=0; i<60; ++i) {
            string s;
            if(i<10) s="0";
            s+=to_string(i);
            bitset<8> b(i);
            minutes[b.count()].push_back(s);
        }
        int max=turnedOn<4?turnedOn:3;
        for(int i=max; i>=0 && i>turnedOn-6; --i)
            for(auto h:hours[i])
                for(auto m:minutes[turnedOn-i])
                    ans.push_back(h+m);
        
        return ans;
    }
};