class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string ans;
        for(auto x:s){
            if(!st.empty() && ((st.top()-'0'==x-'0'+32) || (st.top()-'0'==x-'0'-32))) st.pop();
                else
                    st.push(x);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};