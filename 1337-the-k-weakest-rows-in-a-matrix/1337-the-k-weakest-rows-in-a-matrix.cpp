class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        vector<pair<int,int>> v;
        int n=mat.size();
        for(int i=0;i<n;i++) {
            int cnt=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1) cnt++;
            }
            v.push_back({cnt,i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++) ans.push_back(v[i].second);
        return ans;
    }
};