class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> v;
        for(int i=0;i<score.size();i++) v.push_back({score[i],i});

        sort(v.begin(),v.end(),greater<pair<int,int>> ());
        
        vector<string> s(score.size());
        s[v[0].second]="Gold Medal";
        if(score.size()>=2) s[v[1].second]="Silver Medal";
        if(score.size()>=3) s[v[2].second]="Bronze Medal";
        //for(auto x:v) cout<<x.first<<" "<<x.second<<"\n";
        for(int i=3;i<v.size();i++) s[v[i].second]=to_string(i+1);
        
        return s;
    }
};