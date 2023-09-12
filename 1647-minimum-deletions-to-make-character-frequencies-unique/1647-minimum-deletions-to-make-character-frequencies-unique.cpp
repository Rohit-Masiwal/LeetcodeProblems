class Solution {
public:
    int minDeletions(string s) {
        map<char,int> mp;
        for(auto x:s) mp[x]++;
        int ans=0;
        unordered_set<int> st;
        for(auto x:mp) {
            int freq=x.second;
            while(freq>0 && st.find(freq)!=st.end()) {
                freq--;
                ans++;
            }
            st.insert(freq);
        }
        return ans;
    }
};