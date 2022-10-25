class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0;i<=n/2;i++){
        //     if(nums[i]<nums[i+1] && nums[i+1]<nums[i+2]) return 1;
        // }
        // return 0;
        int left=INT_MAX,mid=INT_MAX;
        for(auto x:nums){
            if(x>mid) return 1;
            else if(x<mid && x>left) mid=x;
            else if(x<left) left=x;
        }
        return 0;
    }
};