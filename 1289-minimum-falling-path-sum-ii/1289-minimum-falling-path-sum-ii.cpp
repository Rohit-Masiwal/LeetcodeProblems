class Solution {
public:
   int solve(int row, int col, vector<vector<int>> &nums,vector<vector<int>> &dp)
    {
        if(col<0 || col>nums[0].size()-1) return 1e9; 
        if(row==nums.size()-1) return nums[row][col];
        if(dp[row][col] != -1) return dp[row][col];
        int ans=INT_MAX;
        for(int k=0;k<nums.size();k++){ 
            if(k!=col)
                ans=min(ans,nums[row][col]+solve(row+1,k,nums,dp));
        }
        return dp[row][col] = ans; 
    }
    int minFallingPathSum(vector<vector<int>>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        int m = nums[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int i=0;i<m;i++) 
            ans = min(ans,solve(0,i,nums,dp));
        return ans;
    }
};