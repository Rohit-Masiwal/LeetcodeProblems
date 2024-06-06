class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        int n=hand.size();
        if(n%g!=0) return 0;
        
        map<int,int> mp;
        for(auto x:hand) mp[x]++;
        vector<pair<int,int>> v;
        for(auto x:mp) v.push_back({x.first,x.second});
        sort(v.begin(),v.end());
        
        for(int i=0;i<v.size();) {
            if(i+g>v.size()) return false;
            
            for(int j=i+1;j<i+g;j++) {
                if(v[j].second<v[j-1].second) return false;
            }
            
            int idx=-1;
            v[i].second-=1;
            if(v[i].second>0) idx=i;
            for(int j=i+1;j<i+g;j++) {
                if(v[j-1].first+1!=v[j].first) return false;
                v[j].second-=1;
                if(idx==-1 && v[j].second>0) idx=j;
            }
            
            if(idx==-1) i+=g;
            else i=idx;
        }
        
        return true;
    }
};