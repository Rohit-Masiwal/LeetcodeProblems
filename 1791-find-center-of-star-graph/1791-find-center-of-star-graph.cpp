class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> mp;
        for(auto x:edges) {
            int a=x[0], b=x[1];
            mp[a]++;
            mp[b]++;
        }
        for(auto x:mp) if(x.second==edges.size()) return x.first;
        return -1;
    }
};