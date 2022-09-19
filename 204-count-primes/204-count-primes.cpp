class Solution {
public:
    int countPrimes(int n) {
        // bool prime[n + 1];
        // int count =0;
        // memset(prime, true, sizeof(prime));
        // for(int p = 2; p * p <= n; p++){
        //     if (prime[p] == true) {
        //         for (int i = p * p; i <= n; i += p)
        //             prime[i] = false;
        //     }
        // }
        // for(int p = 2; p <= n; p++){
        //     if (prime[p]) count++;
        // }
        // return count;
        if(n == 0 || n == 1) return 0;
        vector<bool>primes(n+1, true);
        primes[0] = primes[1] = false;
        for(int i = 2; i*i <= n; i++)
            if(primes[i])
                for(int j = 2; i*j <= n; j++)
                    primes[i*j] = false;
        
        int ans = 0;
        for(int i = 2; i < n; i++)
            if(primes[i]) ans++;
        return ans;   
    }
};