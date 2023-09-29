class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int cnt=1;
        for(int i=0;i<nums.size()-1;i++) if(nums[i]<=nums[i+1]) cnt++;
        if(cnt==nums.size()) return 1;
        cnt=1;
        for(int i=0;i<nums.size()-1;i++) if(nums[i]>=nums[i+1]) cnt++;
        if(cnt==nums.size()) return 1;
        return 0;
    }
};