//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leafNodes(int a[],int n) {
        vector<int> leaf;
        stack<int> st;
        for (int i = 0, j = 1; j < n; i++, j++)
        {
            if (a[i] > a[j])
                st.push(a[i]);
            else
            {
                bool found = false;
                while (!st.empty() && st.top() < a[j])
                {
                    found = true;
                    st.pop();
                }
                if (found)
                    leaf.push_back(a[i]);
                
            }
        }
        leaf.push_back(a[n - 1]);
        return leaf;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends