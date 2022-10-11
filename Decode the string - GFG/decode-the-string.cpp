//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        stack<char>st;
        string res,ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!=']') st.push(s[i]);
            else
            {   
                string ans="";
                while(st.top()!='['){
                    ans=st.top()+ans;
                    st.pop();
                }
                st.pop();
                string numb="";
                while(!st.empty() && isdigit(st.top())){
                    numb=st.top()+numb;
                    st.pop();
                }
                int n=stoi(numb);
                string temp=ans;
                for(int i=0;i<n-1;i++) ans=ans+temp;
                for(int i=0;i<ans.size();i++)   st.push(ans[i]);
            }
        }
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