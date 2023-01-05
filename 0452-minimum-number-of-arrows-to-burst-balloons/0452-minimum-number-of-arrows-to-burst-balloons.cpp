class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),comp);
        int ans=1;
        int end=p[0][1];
        for(int i=0;i<p.size();i++){
            if(end<p[i][0]){
                ans++;
                end=p[i][1];
            }
        }
        return ans;
    }
};