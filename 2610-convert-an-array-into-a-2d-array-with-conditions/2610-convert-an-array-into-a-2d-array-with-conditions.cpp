class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(auto x:nums) ump[x]++;
        for(auto x:ump) cout<<x.first<< " "<< x.second<<"\n";
        int m=0;
        for(auto x:ump) {  
            m=max(m,x.second);
        }
        vector<vector<int>> ans(m,vector<int>());
        for(auto x:ump) {
            for(int i=0;i<x.second;i++) {
                ans[i].push_back(x.first);
            }
        }
        return ans;
    }
};