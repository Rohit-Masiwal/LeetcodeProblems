class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0, n=mat.size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++){
                if(i==j) {
                    ans+=mat[i][j];}
            }
             //cout<<mat[i][n-i-1]<<" ";
             ans+=mat[i][n-i-1];
        }
        if(n%2==1)  ans-=mat[n/2][n/2];
        return ans;
    }
};