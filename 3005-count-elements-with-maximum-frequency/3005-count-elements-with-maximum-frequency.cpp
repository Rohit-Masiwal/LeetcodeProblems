class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        int ans=0;
        for(auto x:nums) mp[x]++;
        int maxx=INT_MIN;
        for(auto x:mp) maxx=max(maxx,x.second);
        for(auto x:mp) {
            if(maxx==x.second) ans+=x.second;
        }
        return ans;
    }
};