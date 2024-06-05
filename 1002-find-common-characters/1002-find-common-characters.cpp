class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        map<char,int> mp[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].size();j++) {
                mp[i][words[i][j]]++;
            }
        }
        vector<string> res;
        for(char ch='a';ch<='z';ch++) {
            int m=INT_MAX;
            for(int i=0;i<n;i++) m=min(m,mp[i][ch]);
            string s;
            s+=ch;
            for(int i=0;i<m;i++) res.push_back(s);
        }
        return res;
    }
};