class Solution {
public:
    int numberOfPaths(vector<vector<int>>& g, int k) {
        int m=g.size(),n=g[0].size();
        cout<<m<<" "<<n<<" "<<k;
        long long dp[m][n][50];
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                for(int l=0;l<k;l++) dp[i][j][l]=0;
            }
        }
        dp[0][0][g[0][0]%k]=1;
        for(int j=1;j<n;j++) {
            for(int l=0;l<k;l++) dp[0][j][(l+g[0][j])%k]+=dp[0][j-1][l];
        }
        for(int i=1;i<m;i++) {
            for(int l=0;l<k;l++) dp[i][0][(l+g[i][0])%k]+=dp[i-1][0][l];
        }
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                for(int l=0;l<k;l++) dp[i][j][(l+g[i][j])%k]=(dp[i][j][(l+g[i][j])%k]+dp[i-1][j][l])%1000000007;
                for(int l=0;l<k;l++) dp[i][j][(l+g[i][j])%k]=(dp[i][j][(l+g[i][j])%k]+dp[i][j-1][l])%1000000007;
            }
        }
        return dp[m-1][n-1][0]%1000000007;
    }
};