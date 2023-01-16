class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>> ans;
        sort(inter.begin(),inter.end());
        vector<int> v=inter[0];
        for(int i=1;i<inter.size();i++){
            if(v[1]>=inter[i][0]){
                v[1]=max(v[1],inter[i][1]);
            }else{
                ans.push_back(v);
                v=inter[i];
            }
        }
        ans.push_back(v);
        // for(auto x:inter){
        //     for(auto y:x) cout<<y<<" ";
        //     cout<<"\n";
        // }
        return ans;
    }
};