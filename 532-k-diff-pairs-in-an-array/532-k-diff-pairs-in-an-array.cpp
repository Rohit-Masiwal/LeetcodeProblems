class Solution {
public:
    int findPairs(vector<int>& v, int k) {
        map<int,int> mp,mp2;
        for(int i=0;i<v.size();i++) {
            if(mp.find(k+v[i])!=mp.end()) {
                mp2[v[i]]=1;
            }
            if(mp.find(v[i]-k)!=mp.end()) {
                mp2[v[i]-k]=1;
            }
            mp[v[i]]=1;
        }
        return mp2.size();
    }
};