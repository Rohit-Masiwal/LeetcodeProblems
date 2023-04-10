class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto x:s){
            if(!st.empty() && ((st.top()=='(' && x==')')||(st.top()=='[' && x==']')||(st.top()=='{' && x=='}')))
                st.pop();
            else
                st.push(x);
        }
        if(!st.empty()) return 0;
        return 1;
    }
};