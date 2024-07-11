class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string ans;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='('){
                st.push(ans.size());
            }else if(s[i]==')'){
                int l=st.top();
                st.pop();
                reverse(ans.begin()+l,ans.end());
                
            }else ans+=s[i];
        }
        return ans;
    }
};
/*
ed < octeel

*/