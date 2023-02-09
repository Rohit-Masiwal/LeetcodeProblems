class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(auto x:gifts) pq.push(x);
        for(int i=0;i<k;i++){
            pq.push(sqrt(pq.top()));
            pq.pop();
        }
        /*
        100 64 25 9 4
        64 25 10 9 4
        25 10 9 8 4
        10 9 8 5 4
        9 8 5 4 3
        */
        long ans=0;
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};