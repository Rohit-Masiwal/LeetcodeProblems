class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(auto x:s) mp[x]++;
        //for(auto x:mp) cout<<x.first<<" "<<x.second<<"\n";
        // vector<pair<char,int>> v;
        for(int i=0;i<s.size();i++) {
            if(mp[s[i]]==1) return i;
        }
        return -1;
    }
};