class Solution {
public:
    vector<int> getRow(int r) {
        vector<vector<int>> ans;
        for(int i=0;i<=r;i++) {
            vector<int> v;
            for(int j=0;j<=i;j++){ 
                if(i!=j && j!=0) 
                    v.push_back(ans[i-1][j-1]+ans[i-1][j]);
                else 
                    v.push_back(1);
                }
            ans.push_back(v);
        }
        vector<int> res;
        for(int i=0;i<ans[r].size();i++){
            res.push_back(ans[r][i]);
        }
        return res;
    }
};