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
/*
    num = 1432219
    k = 3
    
    num = 1124543987
    k = 3
    
    cnt = 0, st = {}
    cnt = 0, st = {1}
    cnt = 0, st = {1, 1}
    cnt = , st = {1, 1, 2}
    st = {1, 1, 2, 4}
    st = {1, 1, 2, 4, 5}
    cnt = 1, st = {1, 1, 2, 4, 4}
    cnt = 2, st = {1, 1, 2, 4, 3}
    cnt = 2, st = {1, 1, 2, 4, 3, 9}
*/
