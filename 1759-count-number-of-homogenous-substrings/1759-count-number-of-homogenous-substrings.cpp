class Solution {
public:
    int mod=1000000007;
    int countHomogenous(string s) {
        int n=s.size();
        int ans=0;
        int l=0;
        for(int i=0;i<n;i++) {
            if(i>0 && s[i]==s[i-1])
                l++;
            else
                l=1;
            ans=(ans+l)%mod;
        }
        return ans;
    }
};