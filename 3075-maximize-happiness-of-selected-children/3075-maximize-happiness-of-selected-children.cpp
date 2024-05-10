class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        long long ans=0;
        sort(h.begin(), h.end(), greater<int>());
        int cnt=0;
        for(int i=0;i<k;i++) {
            ans+= max(h[i]-cnt, 0);
            cnt++;
        }
        return ans;
    }
};