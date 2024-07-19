class Solution {
public:
    bool f(int x, int y, vector<vector<int>> m) {
        for(int i=0;i<m[0].size();i++) {
            if(m[x][i]<m[x][y]) return false;
        }
        for(int i=0;i<m.size();i++) {
            if(m[i][y]>m[x][y]) return false;
        }
        return true;
    }
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        int n=m.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m[0].size();j++){
                if(f(i,j,m)) v.push_back(m[i][j]);
            }
        }
        return v;
    }
};