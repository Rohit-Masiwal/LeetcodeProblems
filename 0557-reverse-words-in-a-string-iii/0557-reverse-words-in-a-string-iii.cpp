class Solution {
public:
    string reverseWords(string s) {
        string ans, temp;
        int cnt=0;
        for(int i=0;i<s.size();i++) {
            temp+=s[i];
            if(s[i]==' ') {
                // cout<<temp<<"\n";
                reverse(temp.begin(),temp.end());
                ans+=temp;
                temp="";
            }
        }
        //cout<<temp;
        ans+=" ";
        reverse(temp.begin(),temp.end());
        ans+=temp;
        string res;
        //cout<<ans;
        for(int i=1;i<ans.size();i++) {
            res+=ans[i];
        }
        return res;
        // int cnt=0;
        // for(int i=0;i<s.size();i++) {
        //     if(s[i]==' ') {
        //         reverse(s.begin()+cnt,s.begin()+i);
        //         cnt=i+1;
        //     }
        // }
        // reverse(s.begin()+cnt,s.end());
        // return s;
    }
};