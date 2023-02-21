class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        map<int,int> mp;
        for(auto x:nums) mp[x]++;
        for(auto x:mp){
            if(x.second==1) return x.first;
        }
        return ans;
    }
};