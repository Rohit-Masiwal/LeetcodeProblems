class Solution {
public:
    string removeStars(string s) {
        string ans;
        stack<char> st;
        for(auto x:s){
            if(!st.empty() && x=='*') 
                st.pop();
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