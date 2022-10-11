class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        string res;
        for(int i=0;i<s.size();i++){
            if(s[i]!=']') st.push(s[i]);
            else{
                string ans="";
                while(st.top()!='['){
                    ans=st.top()+ans;
                    st.pop();
                }
                st.pop();
                string num="";
                while(!st.empty() && isdigit(st.top())){
                    num=st.top()+num;
                    st.pop();
                }
                int n=stoi(num);
                string temp=ans;
                for(int i=0;i<n-1;i++) ans=ans+temp;
                for(int i=0;i<ans.size();i++) st.push(ans[i]);
            }
        }
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};