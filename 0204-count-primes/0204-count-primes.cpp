class Solution {
public:
    int countPrimes(int n) {
        if(n==1 || n==0) return 0;
        vector<int> v(n+1, true);
        for(int i=2;i*i<=n;i++) {
            if(v[i]==true) {
                for(int j=i*i;j<=n;j+=i) v[j]=false;
            }
        }
        int ans=0;
        for(int i=2;i<n;i++) {
            if(v[i]==true) {
                //cout<<i<<" ";
                ans++;
            }
        }
        return ans;
    }
};