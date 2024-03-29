class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++)    mp[nums[i]]++;
        for(auto x:mp){
            if(x.second>n/3) v.push_back(x.first);
        }
    return v;
    }
};