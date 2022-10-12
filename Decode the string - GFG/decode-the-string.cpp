//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        stack<char> st;
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
                }// num="2";
                int n=stoi(num);
                string temp=ans;
                for(int i=1;i<n;i++) ans=ans+temp;
                for(int i=0;i<ans.size();i++) st.push(ans[i]);
            }
        }
        string res;
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends