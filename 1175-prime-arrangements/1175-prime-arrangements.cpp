class Solution {
public:
    bool prime(int n){
        if(n<2) return 0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    int numPrimeArrangements(int n) {
        int p=0,c=0;
        int mod=1000000007;
        for(int i=1;i<=n;i++){
            if(prime(i)) p++;
            else c++;
        }
        long long ans=1;
        for(int i=1;i<=p;i++) ans=(ans%mod*i)%mod;     
        for(int i=1;i<=c;i++) ans=(ans%mod*i)%mod;
        return ans;
    }
};

