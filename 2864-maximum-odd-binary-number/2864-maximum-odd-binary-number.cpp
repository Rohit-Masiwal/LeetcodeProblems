class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        string ans(n,'0');
        int cnt=0;
        for(auto x:s) if(x=='1') cnt++;
        int i=0;
        while(cnt>1) {
            ans[i++]='1';
            cnt--;
        }
        ans[n-1]='1';
        return ans;
    }
};