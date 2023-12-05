class Solution {
public:
    int numberOfMatches(int n) {
        int ans=0;
        if(n<=1) return 0;
        while(n>2) {
            ans+=n/2;
            // cout<<n<<" "<<n/2<<"\n";
            if(n%2==0)
                n=n/2;
            else
                n=n/2+1;
        }
        ans+=1;
        return ans;
    }
};