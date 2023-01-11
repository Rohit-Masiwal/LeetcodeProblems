class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=0;
        // for(auto x:nums) cout<<x<<" ";
        // cout<<"\n";
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                //cout<<i<<" ";
                res+=nums[i-1]-nums[i]+1;
                //cout<<res<<" ";
                nums[i]=nums[i-1]+1;
                //cout<<nums[i]<<"\n";
            }
        }
        return res;
    }
};