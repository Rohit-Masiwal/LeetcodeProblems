class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> res;
        vector<int> ans;
        for(int i=0;i<arr.size();i++) {
            res.push_back({__builtin_popcount(arr[i]),arr[i]});
        }
        sort(res.begin(),res.end());
        for(auto x:res) {
            ans.push_back(x.second);
        }
        return ans;
    }
};