class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        vector<pair<int,int>> v;
        for(auto x:mp) v.push_back({x.second,x.first});
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        //for(auto x:v) cout<<x.first<<" "<<x.second<<"\n";
        vector<int> res;
        for(int i=0;i<k;i++) res.push_back(v[i].second);
        return res;
    }
};
