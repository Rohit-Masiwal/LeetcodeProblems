class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums) mp[x]++;
        vector<int> ans;
        for(auto x:mp) if(x.second > nums.size()/3) ans.push_back(x.first);
        return ans;
    }
};