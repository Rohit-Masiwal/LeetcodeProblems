class Solution {
public:
    int concatenatedBinary(int n) {
        ios_base::sync_with_stdio;
        cin.tie(0);
        cout.tie(0);
        string res;
        int mod=1000000007;
        for(int i=1;i<=n;i++){
            string s="";
            int a=i;
            while(a>0){
                s+=(a%2+'0');
                a/=2;
            }
            reverse(s.begin(),s.end());
            res+=s;
        }
        int ans=0;
        for(auto x:res) ans=((ans*2)+(x-'0'))%mod;
        return ans;
    }
};