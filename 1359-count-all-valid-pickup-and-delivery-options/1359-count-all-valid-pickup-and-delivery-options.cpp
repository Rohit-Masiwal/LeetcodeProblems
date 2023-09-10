class Solution {
public:
    int countOrders(int n) {
        if(n==1) return 1;
        long long ans=1;
        int M=1000000007;
        for(int i=2;i<=n;i++) {
            int space = (i-1)*2+1;
            int possibility = space*(space+1)/2;
            ans=(ans*possibility)%M;
        }
        return ans;
    }
};