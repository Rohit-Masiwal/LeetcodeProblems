class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> ans;
        map<int,int> mp;
        for(auto x:nums1) mp[x]++;
        for(auto x:nums2) if(mp.find(x)!=mp.end()) st.insert(x);
        for(auto x:st) ans.push_back(x);
        return ans;
    }
};