class Solution {
public:
    int dx[4] = {1 , -1, 0 ,0};
    int dy[4] = { 0 ,0 , -1 ,1};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        
        int n = maze.size() , m = maze[0].size();
        queue<pair<int , int >> q;
        vector<vector<bool>> visited(n , vector<bool>(m,0));
        visited[entrance[0]][entrance[1]] = 1;
        q.push({entrance[0] , entrance[1]});
        int level = 0;
        while( !q.empty() ) {
            int siz = q.size();
            level++;
            while( siz-- ) {
                pair<int , int > p = q.front();
                q.pop();
                for( int i=0; i<4; i++ ){
                    int n_r = p.first+dx[i], n_c = p.second+dy[i];
                    if( n_r>=0 && n_c>=0 && n_r<n && n_c<m && maze[n_r][n_c]=='.' && !visited[n_r][n_c]){
                        if( n_r == 0 || n_c==0 || n_r == n-1 || n_c == m-1) return level;
                        visited[n_r][n_c] = 1;
                        q.push({n_r, n_c});
                    }
                }
            }
        }
        return -1;
    }
};