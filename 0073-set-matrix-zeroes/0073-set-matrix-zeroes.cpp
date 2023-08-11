class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row,col;
        for(int i=0;i<n;i++) row.push_back(0);
        for(int i=0;i<m;i++) col.push_back(0);
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j]==0) {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++) 
            for(int j=0;j<m;j++) 
                if(row[i]==1 || col[j]==1) matrix[i][j]=0;
    }
};