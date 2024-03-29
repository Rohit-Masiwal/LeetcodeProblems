class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;
        int n=s.size();
        map<char,int> mp;
        for(int i=0;i<n;i++) {
            if(mp.find(s[i])==mp.end()) 
                    mp[s[i]]=i;
                else
                    ans=max(ans,i-mp[s[i]]-1);
        }
        return ans;
    }
};