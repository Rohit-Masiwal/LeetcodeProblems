class Solution {
public:
    string customSortString(string order, string s) {
        // unordered_map<char,int> mp,mp2;
        // for(auto x:order) {
        //     mp[x]++;
        //     mp2[x]++;
        // }
        // for(auto x:s) mp[x]++;
        // string ans;
        // for(auto x:mp) if(x.second>1) ans=x.first+ans;
        // for(auto x:s) if(mp2.find(x)==mp2.end()) ans+=x;
        // return ans;
        unordered_map<char,int> mp;
        for(auto i:s) mp[i]++;
        string res;
        for(auto i:order)
        {
            res+=string(mp[i],i);
            mp[i]=0;
        }
        for (auto i : mp) {
            res += string(i.second, i.first);
        }
        return res;
    }
};