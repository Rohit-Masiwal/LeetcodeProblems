class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        vector<string> v;
        string a;
        for(auto x:s){
            if(!st.empty() && (st.top()=='(' && x==')')){
                a+=x;
                st.pop();
            }
            else{
                a+=x;
                st.push(x);
            }
            if(st.empty()){
                v.push_back(a);
                a="";
            }
        }
        string ans;
        for(int i=0;i<v.size();i++){
            for(int j=1;j<v[i].size()-1;j++){
                ans+=v[i][j];
            }
        }
        
        return ans;
    }
};