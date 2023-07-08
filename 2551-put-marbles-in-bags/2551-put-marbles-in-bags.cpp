class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        long long ans=0;
        priority_queue<int> pq;
        priority_queue<int,vector<int>,greater<int>> pq2;
        int n=weights.size();
        for(int i=0;i<n-1;i++){
            pq.push(weights[i]+weights[i+1]);
            pq2.push(weights[i]+weights[i+1]);
        }
        int x=k-1;
        while(x--){
            ans+=pq.top();
            ans-=pq2.top();
            pq.pop();
            pq2.pop();
        }
        return ans;
    }
};