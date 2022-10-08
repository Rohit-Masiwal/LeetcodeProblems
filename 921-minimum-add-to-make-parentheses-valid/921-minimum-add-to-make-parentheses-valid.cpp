class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st,st2;
        for(auto x:s){
            // if(x=='(') 
            //     st.push(x);
            // else if(!st.empty())
            //     st.pop();
            if(!st.empty() && st.top()=='(' && x==')') 
                st.pop();
            else
                st.push(x);
        }
        int n=st.size(),m=st2.size();
        return n;
    }
};