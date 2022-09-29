class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string res;
        for(auto x:s){
            if(x==' ' && res!=""){
                st.push(res);
                res="";
            }
            if(x!=' ') res+=x;
        }
        if(res!="") st.push(res);
        string ans;
        while(!st.empty()){
            // cout<<st.top()<<"-\n";
            ans+=st.top();
            st.pop();
            if(!st.empty()) ans+=' ';
        }
        return ans;
    }
};