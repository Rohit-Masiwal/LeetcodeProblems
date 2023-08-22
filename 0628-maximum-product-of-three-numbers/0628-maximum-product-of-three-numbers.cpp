class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return max({nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[2],
                   nums[0]*nums[1]*nums[n-1],nums[0]*nums[n-2]*nums[n-1]});
        // int ans=INT_MIN;
        // for(int i=0;i<nums.size()-2;i++) ans=max(ans,nums[i]*nums[i+1]*nums[i+2]);
        // return ans;
    }
};