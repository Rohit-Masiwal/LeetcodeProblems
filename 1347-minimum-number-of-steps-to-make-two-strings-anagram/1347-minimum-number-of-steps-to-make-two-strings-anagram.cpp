class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mp;
        for(auto x:t) mp[x]++;
        
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]]>0 && (mp.find(s[i]) != mp.end())) mp[s[i]]--;
        }
        int ans=0;
        for(auto x:mp) ans+=x.second;
        return ans;
    }
};