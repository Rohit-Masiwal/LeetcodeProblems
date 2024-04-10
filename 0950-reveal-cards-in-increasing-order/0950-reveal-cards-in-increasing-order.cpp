class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        int n=deck.size();
        for(int i=0;i<n;i++) q.push(i);
        vector<int> ans(n);
        sort(deck.begin(),deck.end());
        for(int i=0;i<n;i++) {
            int idx=q.front();
            q.pop();
            ans[idx]=deck[i];
            if(!q.empty()) {
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};