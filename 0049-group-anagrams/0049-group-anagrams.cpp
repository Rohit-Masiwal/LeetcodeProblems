class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> un;
        for(auto x:str){
            string res=x;
            sort(x.begin(),x.end());
            un[x].push_back(res);
        }
        for(auto x:un) ans.push_back(x.second);
        //for(auto x:un) cout<<x.first<<" "<<x.second<<"\n";
        return ans;
    }
};