//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int> un;
            for(int j=i;j<s.size();j++){
                un[s[j]]++;
                int maxx=INT_MIN;
                int minn=INT_MAX;
                for(auto x:un){
                    if(x.second>maxx) 
                        maxx=x.second;
                    if(x.second<minn) 
                        minn=x.second;
                }
                sum+=(maxx-minn);
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends