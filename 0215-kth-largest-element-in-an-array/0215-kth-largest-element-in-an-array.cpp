class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>> pq;
        for(auto x:nums) pq.push(x);
        int i=0;
        int ans=0;
        while(i<k && !pq.empty()) {
            ans=pq.top();
            pq.pop();
            i++;
        }
        // while(!pq.empty()){
        //     cout<<pq.top();
        //     pq.pop();
        // }
        return ans;
    }
};
/*
    3 2 1 5 6 4
    1 2 3 4 5 6
    
    
    3 2 3 1 2 4 5 5 6
    6 5 5 4 3 3 2 2 1
    1 2 3 4 5 6
    6 5 4 3 2 1
*/