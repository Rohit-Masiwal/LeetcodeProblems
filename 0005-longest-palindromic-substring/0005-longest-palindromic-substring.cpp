class Solution {
public:
    bool ispal(string s) {
        string t;
        t=s;
        reverse(t.begin(),t.end());
        return t==s;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        bool dp[n][n];
        int start,end;
        for(int l=0;l<n;l++) {
            for(int i=0;i<n-l;i++) {
                int j=i+l;
                // cout<<i<<" "<<j<<"\n";
                if(l==0) dp[i][j]=true;
                else if(l==1) {
                    dp[i][j]=(s[i]==s[j]);
                }
                else {
                    dp[i][j]=(s[i]==s[j]) && dp[i+1][j-1];
                }
                if(dp[i][j]) {
                    start=i;
                    end=j;
                }
            }
        }
        return s.substr(start,end-start+1);
        // string t;
        // int m=0;
        // for(int i=0;i<s.size();i++) {
        //     for(int j=i;j<s.size();j++) {
        //         cout<<i<<" "<<j<<" "<<s.substr(i,j-i+1)<<"\n";
        //         if(ispal(s.substr(i,j-i+1))) {
        //             if(m<=j-i+1) {
        //                 m=j-i+1;
        //                 t=s.substr(i,j-i+1);   
        //             }
        //         }
        //     }
        // }
        // return t;
    }
};


// dp[i][j] = (s[i]==s[j]) && dp[i+1][j-1]
// _ _ _ _
// _ _ _ _
// _ _ _ _
// _ _ _ _