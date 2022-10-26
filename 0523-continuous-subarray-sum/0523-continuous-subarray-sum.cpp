class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // int sum=0;
        // if(nums.size<2) return 0;
        // for(auto x:nums) sum+=x;
        // if(sum%k==0) return 1;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]+nums[i+1]==k) return 1;
        // }
        int sum=0;
        map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++) {
            sum=(sum+nums[i])%k;
            if(mp.find(sum)!=mp.end()) {
                if(i-mp[sum]>=2) return 1;
            }
            else mp[sum]=i;
        }
        return 0;
    }
};