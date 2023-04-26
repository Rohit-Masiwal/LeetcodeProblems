class Solution {
public:
    int alternateDigitSum(int n) {
        int ans=0;
        int cnt=0;
        string res=to_string(n);
        reverse(res.begin(),res.end());
        n=stoi(res);
        while(n>0){
            if(cnt%2==0)
                ans+=n%10;
            else
                ans-=n%10;
            cnt++;
            n/=10;
        }
        return ans;
    }
};