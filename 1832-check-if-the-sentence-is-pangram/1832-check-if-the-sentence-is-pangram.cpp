class Solution {
public:
    bool checkIfPangram(string s) {
        map<char,int> mp;
        for(auto x:s) mp[x]++;
        vector<char> v;
        for(auto x:mp) v.push_back(x.first);
        // for(int i=0;i<27;i++){
        //     if(mp[]==0) return 0;
        // }
        if(v.size()==26) return 1;
        return 0;
    }
};