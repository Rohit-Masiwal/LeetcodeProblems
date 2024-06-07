class Solution {
public:
    string replaceWords(vector<string>& d, string s) {
        string ans;
        map<string,int> mp;
        for(auto x:d) mp[x]++;
        for(int i=0;i<s.size();) {
            int j=i;
            string t;
            bool flag=false;
            while(!flag && j<s.size() && s[j]!=' ') {
                t+=s[j];
                if(mp.find(t)!=mp.end()) {
                    flag=true;
                }
                j++;
            }
            if(flag) {
                while(j<s.size() && s[j]!=' ') {
                    j++;
                }
            }
            i=j+1;
            ans+=t;
            ans+=' ';
        }
        return ans.substr(0, ans.size()-1);
    }
};