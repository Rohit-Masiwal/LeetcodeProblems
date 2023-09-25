class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp;
        for(auto x:s) mp[x]++;
        for(int i=0;i<t.size();i++) {
            if(mp[t[i]]==0) return t[i];
            mp[t[i]]--;
        }
        return ' ';
    }
};