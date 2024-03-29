//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int n)
    {
        int arr[10]= { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        int i=9;
        vector<int> ans;
        while(i>=0){
            if(arr[i]>n){
                i--;
            }else{
                while(n>=arr[i]){
                    ans.push_back(arr[i]);
                    n-=arr[i];
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends