class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // map<int,int> mp;
        // for(int i=0;i<nums.size();i++)
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};
/*
    3 2 1 5 6 4
    1 2 3 4 5 6
    
    
    3 2 3 1 2 4 5 5 6
    6 5 5 4 3 3 2 2 1
    1 2 3 4 5 6
    6 5 4 3 2 1
*/