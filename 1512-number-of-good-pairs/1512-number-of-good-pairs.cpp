class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        int ans=0;
        for(auto x:nums) {
            ans+=mp[x];
            mp[x]++;
        }
        return ans;
    }
};