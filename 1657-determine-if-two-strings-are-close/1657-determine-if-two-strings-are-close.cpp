class Solution {
public:
    bool closeStrings(string word1, string word2) {
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());
        if(word1 == word2)return true;
        map<char, int>mp;
        for(auto it : word1){
            mp[it]++;
        }
        vector<int>v1, v2, c1, c2;
        for(auto it : mp){
            v1.push_back(it.second);
            c1.push_back(it.first);
        }
        mp.clear();
        for(auto it : word2){
            mp[it]++;
        }
        for(auto it : mp){
            v2.push_back(it.second);
            c2.push_back(it.first);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        sort(c1.begin(), c1.end());
        sort(c2.begin(), c2.end());
        return ((v1 == v2) and (c1 == c2));
    }
};