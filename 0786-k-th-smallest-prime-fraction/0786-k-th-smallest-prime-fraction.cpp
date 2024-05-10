class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<float,pair<int,int>>> frac;
        for(int i=0;i<arr.size();i++) {
            for(int j=i;j<arr.size();j++) if(arr[i]!=arr[j]) frac.push_back({(arr[i]*1.0/arr[j]),{arr[i],arr[j]}});
        }
        sort(frac.begin(),frac.end());
        // for(auto x:frac) cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<"\n";
        vector<int> ans;
        ans.push_back(frac[k-1].second.first);
        ans.push_back(frac[k-1].second.second); 
        return ans;
    }
};