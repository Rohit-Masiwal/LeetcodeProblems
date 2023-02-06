class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
            
    /*
    2 5 1  3 4 7
    2 3 5 4 1 7
    1 2 3  4 4 3 2 1
    1 4 2 3
    */
        return ans;
    }
};