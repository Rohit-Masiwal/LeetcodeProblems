class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st ;
        int i = 0 ; 
        for(int i = 0 ; i < num.length() ; i++){
            while(k>0 && !st.empty() && num[i] < st.top()){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        string ans = "" ;
        while(!st.empty() && k> 0){
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin() ,ans.end());
        //cout<<ans ;
        string res;
        string result = "";
        for (int i = 0; i < ans.length(); i++) {
             if (ans[i] != '0') {
                res = ans.substr(i); 
                return res;
            }
        }
        return "0";
    }
};