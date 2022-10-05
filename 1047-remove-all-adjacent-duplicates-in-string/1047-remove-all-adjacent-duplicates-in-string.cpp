class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        stack<char> st;
        for(auto x:s){
            if(!st.empty() && (st.top()==x))
                st.pop();
            else
                st.push(x);
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};