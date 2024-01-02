class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(auto x:nums) ump[x]++;
        vector<vector<int>> ans;
        //for(auto x:ump) cout<<x.first<< " "<< x.second<<"\n";
        int maxx=0;
        for(auto x:ump) maxx=max(maxx,x.second);
        for(int i=0;i<maxx;i++) {  
            vector<int> v;
            for(auto& x:ump) {
                if(x.second>0) {
                    v.push_back(x.first);
                    x.second--;
                }
            }
            //for(auto x:v) ump[x]--;
            ans.push_back(v);
        }
        return ans;
    }
};