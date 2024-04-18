class Solution {
public:
    bool check(int i, int j, int n, int m) {
        if(i==n || i==-1) return 0;
        if(j==m || j==-1) return 0;
        return 1;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int s=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]) {
                    if(!check(i-1,j,n,m)) s++;
                    else s+=!grid[i-1][j];
                    if(!check(i+1,j,n,m)) s++;
                    else s+=!grid[i+1][j];
                    if(!check(i,j-1,n,m)) s++;
                    else s+=!grid[i][j-1];
                    if(!check(i,j+1,n,m)) s++;
                    else s+=!grid[i][j+1];
                }
            }
        }
        return s;
    }
};