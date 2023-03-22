class Solution {
public:
    vector<int> v[100005],v1;
    map<pair<int,int>,int> mp;
    bool visited[100005];
    int res=10001;
    void dfs(int cur) {
        v1.push_back(cur);
        visited[cur]=1;
        for(auto x:v[cur]) {
            if(!visited[x]) {
                dfs(x);
            }
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        for(auto x:roads) {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
            mp[{x[0],x[1]}]=x[2];
            mp[{x[1],x[0]}]=x[2];
        }
        memset(visited,0,sizeof(visited));
        dfs(1);
        for(auto x:v1) {
            for(auto y:v[x]) res=min(res,mp[{x,y}]);
        }
        return res;
    }
};