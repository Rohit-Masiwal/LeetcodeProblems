class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<pair<int,int>> vp;
        vector<int> v;
        for(int i=0;i<nums.size();i+=2) vp.push_back({nums[i],nums[i+1]});
        //for(auto x:vp) cout<<x.first<<" "<<x.second<<"\n";
        for(auto x:vp){
            int n=x.first;
            for(int i=0;i<n;i++) v.push_back(x.second);
        }
        return v;
    }
};