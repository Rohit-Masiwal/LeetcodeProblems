class Solution {
public:
    int tribonacci(int n) {
        int f=0,s=1,t=1;
        int ans=0;
        if(n==1 || n==2) return 1;
        if(n==0) return 0;
        for(int i=3;i<=n;i++) {
            ans=f+s+t;
            //cout<<ans<<" ";
            f=s;
            s=t;
            t=ans;
        }
        return ans;
    }
};