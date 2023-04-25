class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(auto x:stones) p.push(x);
        while(p.size()>1){
            int res=p.top();
            p.pop();
            res=res-p.top();
            p.pop();
            p.push(res);
        }
        return p.top();
    }
};