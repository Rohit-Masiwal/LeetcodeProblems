class Solution {
public:
    int dp[301];
    bool checkString(int pos, string s, map<string, bool> hashMap) {
        if(pos==s.size()) return true;
        if(dp[pos]!=-1) return dp[pos];
        string t;
        for(int i=pos;i<s.size();i++) {
            t+=s[i];
            if(hashMap[t]==true) {
                // cout<<pos<<" "<<i<<"\n";
                bool check = checkString(i+1, s, hashMap);
                if(check) return true;
            }
        }
        return dp[pos]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=wordDict.size();
        memset(dp,-1,sizeof(dp));
        map<string, bool> hashMap;
        for(auto x: wordDict) {
            hashMap[x] = true;
        }
        return checkString(0, s, hashMap);
    }
};