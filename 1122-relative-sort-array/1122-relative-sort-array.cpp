class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        for(auto x:arr1) mp[x]++;
        vector<int> ans;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<mp[arr2[i]];j++){
                ans.push_back(arr2[i]);
            }
            mp.erase(arr2[i]);
        }
        for(auto x:mp){
            int n=x.second;
            for(int i=0;i<n;i++) ans.push_back(x.first);
        }
        return ans;
    }
};