class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,cnt=0;
        for(auto x:nums){
            if(x!=0)
                cnt=0;
            else
                cnt++;
            ans+=cnt;
        }
        return ans;
    }
};