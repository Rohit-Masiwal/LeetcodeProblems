//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int ans=INT_MAX;
        map<char,int> mp;
        for(auto x:s) mp[x]++;
        string a="balon";
        /*
        b=1
        a=1
        l=1
        o=1
        n=1
        
        c=1;
        mp[x] --
        
        */
        int cnt=INT_MAX;
        for(auto x:a){
            if(mp.find(x)==mp.end()) return 0;
            else if(x=='l' || x=='o') cnt=min(cnt,mp[x]);
            else {
                ans=min(ans,mp[x]);
            }
        }
        if(ans*2>cnt) ans=cnt/2;
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends