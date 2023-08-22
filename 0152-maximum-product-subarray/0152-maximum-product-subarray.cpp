class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
//         if(nums.size()==2) {
//             ans=max(ans,nums[0]);
//             ans=max(ans,nums[0]*nums[1]);
//             ans=max(ans,nums[1]);
//             return ans;
//         }
//         if(nums.size()==1)
//             return nums[0];
        
//         int pod=nums[0]*nums[1];
        int pod=1;
        for(int i=0;i<nums.size();i++) {
            pod*=nums[i];
            ans=max(ans,pod);
            if(pod==0) pod=1;
        }
        pod=1;
        for(int i=nums.size()-1;i>=0;i--) {
            pod*=nums[i];
            ans=max(ans,pod);
            if(pod==0) pod=1;
        }
        return ans;
    }
};