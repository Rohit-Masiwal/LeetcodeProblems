class Solution {
public:
    bool check(string temp) {
        string res=temp;
        reverse(res.begin(),res.end());
        return res==temp;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto x:words) {
            if(check(x)) return x;
        }
        return "";
    }
};