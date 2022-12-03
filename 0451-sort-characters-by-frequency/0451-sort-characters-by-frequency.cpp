class Solution {
public:
    static bool comp(pair<int,char> a,pair<int,char> b){
        if(a.first>b.first) return 1;
        if(a.first==b.first) return a.second<b.second;
        return 0;
    }
    string frequencySort(string s) {
        map<char,int> mp;
        vector<pair<int,char>> res;
        for(auto x:s) mp[x]++;
        for(auto x:mp) res.push_back({x.second,x.first});
        sort(res.begin(),res.end(),comp);
        string ans;
        for(auto x:res) {
            for(int i=0;i<x.first;i++) ans+=x.second;
        }
        return ans;
    }
};