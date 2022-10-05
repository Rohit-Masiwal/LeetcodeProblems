class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && s[st.top()]=='(' && s[i]==')')
                st.pop();
            else if(s[i]=='(' || s[i]==')') 
                st.push(i);
        }
        string res;
        for(int i=s.size()-1;i>=0;i--) {
            if(!st.empty() && st.top()==i) {
                st.pop();
                continue;
            }
            res+=s[i];
        }
        reverse(res.begin(),res.end());
        return res;
    }
};