class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size()==1) return false;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++) {
            if(nums[i]!=(i+1)) return false;
        }
        return nums[n-1]==nums[n-2];
    }
};