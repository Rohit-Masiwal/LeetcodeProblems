class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        set<int> ans;
        for(auto x:arr) mp[x]++;
        for(auto x:mp)  ans.insert(x.second);
        return mp.size()==ans.size();
    }
};