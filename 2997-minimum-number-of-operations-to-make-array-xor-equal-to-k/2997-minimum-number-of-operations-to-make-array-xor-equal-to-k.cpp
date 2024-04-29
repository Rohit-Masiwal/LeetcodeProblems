class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int totalXor=0;
        for(auto x:nums) totalXor^=x;
        return __builtin_popcount(totalXor^k);
    }
};