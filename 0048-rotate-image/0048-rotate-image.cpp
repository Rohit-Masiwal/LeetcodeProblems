class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> m;
        for(int i=0;i<matrix.size();i++) {
            vector<int> v;
            for(int j=matrix.size()-1;j>=0;j--) v.push_back(matrix[j][i]);
            m.push_back(v);
        }
        matrix=m;
    }
};