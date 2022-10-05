class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st,st1;
        string ans,ans1;
        for(auto x:s){
            if(!st.empty() && x=='#') st.pop();
            else if(st.empty() && x=='#') continue;
            else st.push(x);
            
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        cout<<ans<<" ";
        for(auto x:t){
            if(!st1.empty() && x=='#') st1.pop();
            else if(st1.empty() && x=='#') continue;
            else st1.push(x);
        }
        while(!st1.empty()){
            ans1=st1.top()+ans1;
            st1.pop();
        }
        cout<<ans1<<" ";
        return ans==ans1;
    }
};