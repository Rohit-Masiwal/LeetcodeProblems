class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> ans,res;
        int m=0;
        for(int i=0;i<nums.size();i++){
            m=max(m,nums[i]);
            long long sum=m+nums[i];
            res.push_back(sum);
        }
        long long sum=0;
        for(auto x:res) {
            sum+=x;
            ans.push_back(sum);
        }
        return ans;
    }
};