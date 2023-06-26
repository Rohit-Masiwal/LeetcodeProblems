class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int c) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<costs.size();i++) {
            if(i<=c-1 || i>=costs.size()-c) pq.push({costs[i],i});
        }
        int a=-1,b=-1;
        if(c*2<costs.size()) {
            a=c;
            b=costs.size()-c-1;
        }
        long long sum=0;
        while(k--) {
            sum+=pq.top().first;
            int index=pq.top().second;
            pq.pop();
            if(a!=-1 && b!=-1 && a<=b) {
                if(index<a) {
                    pq.push({costs[a],a});
                    a+=1;
                }
                else {
                    pq.push({costs[b],b});
                    b-=1;
                }
            }
        }
        return sum;
    }
};