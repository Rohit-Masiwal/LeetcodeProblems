class Solution {
public:
    bool check(string &s, int i, int j) {
        if(i>j) return 1;
        if(s[i]==s[j]) return check(s,i+1,j-1);
        return 0;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(check(s,i,j)==1) cnt++;
            }
        }
        return cnt;
    }
};