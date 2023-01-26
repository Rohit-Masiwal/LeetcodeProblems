class Solution {
public:
   int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
   unordered_map<int,vector<pair<int,int>>>adj;
   for(auto it:flights)
   {
       int from=it[0];
       int to=it[1];
       int cost=it[2];
       adj[from].push_back({to,cost});
   }
    queue<pair<int,int>>q;
    q.push({src,0});
    vector<int>dis(n,1e6);
    dis[src]=0;

    while(!q.empty() and k-->=0)
    {
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            int u=q.front().first;
            int d=q.front().second;
            q.pop();

            for(auto it:adj[u])
            {
                int v=it.first;
                int cost=it.second;
                if(dis[v]>cost+d)
                {
                    dis[v]=cost+d;
                    q.push({v,cost+d});
                }

            }

        }
    }
    if(dis[dst]==1e6)
        return -1;
    return dis[dst];

}
};