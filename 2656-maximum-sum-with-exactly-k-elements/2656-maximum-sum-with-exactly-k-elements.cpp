class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        priority_queue<int> p;
        for(auto x:nums) p.push(x);
        int ans=0;
        while(k--){
            int n=p.top();
            ans+=n;
            p.pop();
            p.push(n+1);
        }
        return ans;
    }
};