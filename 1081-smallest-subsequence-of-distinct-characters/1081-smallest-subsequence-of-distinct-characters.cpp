class Solution {
public:
    string smallestSubsequence(string s) {
        string ans;
        vector<int> index(26);
        vector<bool> check(26, false);
        for(int i=0;i<s.size();i++) index[s[i]-'a']=i;
        for(int i=0;i<s.size();i++) {
            int idx=s[i]-'a';
            if(check[idx]==true) continue;
            while(ans.size()>0 && ans.back()>s[i] && index[ans.back()-'a']>i) {
                check[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans.push_back(s[i]);
            check[idx]=true;
        }
        return ans;
    }
};