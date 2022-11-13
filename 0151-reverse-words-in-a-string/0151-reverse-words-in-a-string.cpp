class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string res;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && res!=""){
                st.push(res);
                res="";
            }
            if(s[i]!=' ') res+=s[i];
        }
        if(res!="") st.push(res);
        res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
            if(!st.empty()) res+=' ';
        }
        return res;
    }
};