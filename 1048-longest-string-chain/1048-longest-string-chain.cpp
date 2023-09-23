class Solution {
public:
    static bool comp(string &s1, string &s2) {
        return s1.size()<s2.size();
    }
    int longestStrChain(vector<string>& words) {
        map<string,int> mp;
        sort(words.begin(),words.end(),comp);
        int ans=0;
        for(auto x:words) {
            int longest=0;
            for(int i=0;i<x.size();i++) {
                string s=x;
                s.erase(i,1);
                longest=max(longest,mp[s]+1);
            }
            mp[x]=longest;
            ans=max(ans,longest);
        }
        return ans;
    }
};