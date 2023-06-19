class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v;
        v.push_back(0);
        for(int i=0;i<gain.size();i++){
            int sum=v[i]+gain[i];
            v.push_back(sum);
        }
        //for(auto x:v) cout<<x<<" ";
        sort(v.begin(),v.end(),greater<int>());
        return v[0];
    }
};