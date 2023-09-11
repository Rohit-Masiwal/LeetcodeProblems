class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        map<int,vector<int>> mp;
        for(int i=0;i<groupSizes.size();i++) {
            int key=groupSizes[i];
            mp[key].push_back(i);
            if(mp[key].size()==key){
                ans.push_back(mp[key]);
                mp.erase(key);
            }
        }
        return ans;
    }
};