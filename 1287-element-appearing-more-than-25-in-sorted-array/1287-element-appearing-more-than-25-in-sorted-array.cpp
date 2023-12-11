class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> mp;
        for(auto x:arr) mp[x]++;
        vector<pair<int,int>> v;
        for(auto x:mp) v.push_back({x.second,x.first});
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        // for(auto x:v) cout<<x.first<<" "<<x.second<<" ";
        return v[0].second;
    }
};