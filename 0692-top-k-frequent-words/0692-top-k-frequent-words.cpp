class Solution {
public:
    static bool comp(pair<int,string> a,pair<int,string> b) {
        if(a.first>b.first) return 1;
        if(a.first==b.first) return a.second<b.second;
        return 0;
    }
    //  static bool comp(pair<string,int> p1, pair<string,int> p2)
    // {
    //     if(p1.second>p2.second || (p1.second==p2.second && p1.first<p2.first))
    //         return true;
    //     return false;
    // }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto x:words) mp[x]++;
        vector<pair<int,string>> v;
        for(auto x:mp) v.push_back({x.second,x.first});
        sort(v.begin(),v.end(),comp);
        for(auto x:v) cout<<x.second<<" "<<x.first<<"\n";
        vector<string> ans;
        for(int i=0;i<k;i++) ans.push_back(v[i].second);
        return ans;
    }
};