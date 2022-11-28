class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> wi,lo;
        vector<vector<int>>ans;
        int n=matches.size();
        for(int i=0;i<n;i++) wi[matches[i][0]]++;
        for(int i=0;i<n;i++) lo[matches[i][1]]++;
//         for(auto x:wi) cout<<x.first<<" "<<x.second<<"\n";
//         cout<<"---------"<<"\n";
//         for(auto x:lo) cout<<x.first<<" "<<x.second<<"\n";
        
        vector<int> v;
        for(auto x:wi){
            if(lo.find(x.first)==lo.end()) v.push_back(x.first);
        }
        ans.push_back(v);
        vector<int> v1;
        for(auto x:lo){
            if(x.second==1) v1.push_back(x.first);
        }
        ans.push_back(v1);
        return ans;
    }
};