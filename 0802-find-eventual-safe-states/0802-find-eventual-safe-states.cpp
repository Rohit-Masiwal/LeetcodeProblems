class Solution {
public:
    vector<int> ans;
    map<int,int> safe;
    
    bool dfs(int node, vector<vector<int>>& graph){
        
        if(safe.find(node) != safe.end()) return safe[node];
        safe[node]=0;
        for(auto x:graph[node]){
            if(!dfs(x,graph))
                return false;
        }
        safe[node]=1;
        return true;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        for(int i=0;i<graph.size();i++){
            if(dfs(i,graph))
                ans.push_back(i);
        }
        return ans;
    }
};