class Solution {
public:
    int dfs(vector<vector<int>>& grid ,int i, int j) {
        int n=grid.size();
        int m=grid[0].size();
        if(i>=n || j>=m || i<0 || j<0 || grid[i][j]==0) return 0;
        
        int temp=grid[i][j];
        grid[i][j]=0;
        int ans=0;
        
        ans=max(ans,dfs(grid,i-1,j));
        ans=max(ans,dfs(grid,i,j-1));
        ans=max(ans,dfs(grid,i+1,j));
        ans=max(ans,dfs(grid,i,j+1));
        
        grid[i][j]=temp;
        return ans+temp;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]!=0) ans=max(ans,dfs(grid,i,j));
            }
        }
        return ans;
    }
};