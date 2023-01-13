class Solution {
public:
    vector<vector<int>> g;
    int ans = 1 ;
    
    int dfs(int root , string &s ){
        vector<int> branch;
        int bp1 = 0 , bp2 = 0 ;
        for( auto nbr : g[root] ){
            int val = dfs(nbr,s);
            if( s[root] != s[nbr] ) {
                if(val >= bp1 ) bp2 = bp1, bp1 = val;
                else if(val >= bp2) bp2 = val;
            }
        } 
        ans = max( ans , bp1+bp2+1 );
        return bp1+1;
    }
    
    int longestPath(vector<int>& parent, string s) {
        int n = parent.size();
        g.resize(n);
        for( int i = 1 ; i < parent.size(); i++ ) g[parent[i]].push_back(i);
        dfs(0,s);
        return ans;
    }
};