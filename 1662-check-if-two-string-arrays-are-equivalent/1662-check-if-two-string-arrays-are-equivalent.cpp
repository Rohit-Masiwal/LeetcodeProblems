class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1,w2;
        for(auto x:word1) w1+=x;
        for(auto x:word2) w2+=x;
        return w1==w2;
    }
};