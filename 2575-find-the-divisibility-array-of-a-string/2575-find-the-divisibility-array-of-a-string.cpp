class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        long long n=0;
        vector<int> ans;
        for(auto x:word){
            n=(n*10+int(x-'0'))%m;
            (n==0)?ans.push_back(1):ans.push_back(0);
        }
        return ans;
    }
};