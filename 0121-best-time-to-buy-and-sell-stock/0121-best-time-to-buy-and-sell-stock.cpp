class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=p[0], n=p.size(), ans=0;
        for(int i=1;i<n;i++){
            int c=p[i]-mini;
            ans=max(ans,c);
            mini=min(mini,p[i]);
        }
        return ans;
    }
};