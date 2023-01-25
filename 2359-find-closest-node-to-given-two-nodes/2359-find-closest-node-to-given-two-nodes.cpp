class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int> v1(n, INT_MAX), v2(n, INT_MAX);
        for(int i = node1, dis = 0; i != -1; i = edges[i], ++dis){
            if(v1[i] != INT_MAX) break; // cycle
            v1[i] = dis;
        }
        for(int i = node2, dis = 0; i != -1; i = edges[i], ++dis){
            if(v2[i] != INT_MAX) break; // cycle
            v2[i] = dis;
        }
        int minDis = INT_MAX, ans = -1;
        for(int i = 0; i < n; ++i){
            int t = max(v1[i], v2[i]);
            if(t < minDis) minDis = t, ans = i;
        }
        return ans;
    }
};