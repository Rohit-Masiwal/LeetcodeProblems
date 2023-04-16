class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> ans;
        for(int i=0;i<grid[0].size();i++){
            int m=1;
            for(int j=0;j<grid.size();j++){
                m=max(m,(int)to_string(grid[j][i]).size());
            }
            ans.push_back(m);
        }
        return ans;
    }
};