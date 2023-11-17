class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans=0;
        int i=0, j=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j){
            ans=max(ans,nums[i++]+nums[j--]);
        }
        return ans;
    }
};