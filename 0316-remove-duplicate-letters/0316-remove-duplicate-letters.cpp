class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> index(26);
        vector<bool> taken(26, false);
        for(int i=0;i<s.size();i++) index[s[i]-'a']=i;
        string ans;
        for(int i=0;i<s.size();i++) {
            int idx=s[i]-'a';
            if(taken[idx]==true) continue;
            while(ans.size()>0 && ans.back()>s[i] && index[ans.back()-'a']>i){
                taken[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans.push_back(s[i]);
            taken[idx]=true;
        }
        return ans;
    }
};