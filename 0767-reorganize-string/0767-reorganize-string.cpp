class Solution {
public:
    string reorganizeString(string s) {
        map<char,int> mp;
        for(auto x:s) mp[x]++;
        int n=s.size();
        for(auto x:mp)
            if(x.second>(n+1)/2) return "";
        string ans;
        priority_queue<pair<int,char>> pq;
        //for(auto x:mp) cout<<x.first<<" "<<x.second<<"\n";
        for(auto x:mp) pq.push({x.second,x.first});
        // while(!pq.empty()) {
        //     cout<<pq.top().first<<" "<<pq.top().second<<"\n";
        //     pq.pop();
        // }
        while(pq.size()>=2) {
            auto a=pq.top();
            pq.pop();
            
            auto b=pq.top();
            pq.pop();
            
            ans.push_back(a.second); a.first--;
            ans.push_back(b.second); b.first--;
            
            if(a.first>0) pq.push(a);
            if(b.first>0) pq.push(b);
        }
        if(!pq.empty()) ans.push_back(pq.top().second);
        return ans;
    }
};