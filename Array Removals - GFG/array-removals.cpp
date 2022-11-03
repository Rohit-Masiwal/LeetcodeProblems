//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int maxsize=INT_MIN;
        int i=0,j=0;
        while(j<n){
            if(arr[j]-arr[i]<=k){
                //cout<<arr[j]<<" "<<arr[i]<<" ";
                j++;
                //cout<<"j="<<j<<" ";
            }
            else if(i<j){
                i++;
                //cout<<"i="<<i<<" ";
            }
            maxsize=max(maxsize,j-i);
            //cout<<"max="<<maxsize<<"\n";
        }
        /*
        1 5 6 2 8  k=2
        sort 1 2 5 6 8
        1-1=0 max=1-0=1 ,2-1=1 max=2-0=2,   5-1=4
        j=2;
        i=1;
        
        
        5-2=3
        i=2
        max=
        5-5=0,6-5=1,8-5=2
        */
        return n-maxsize;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends