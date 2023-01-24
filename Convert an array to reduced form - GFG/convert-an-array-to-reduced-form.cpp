//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    vector<pair<int,int>> v;
	    for(int i=0;i<n;i++) v.push_back({arr[i],i});
	    sort(v.begin(),v.end());
	    for(int i=0;i<n;i++){
	        arr[v[i].second]=i;
	    }
	    
	  /*
	  10 0 
	  20 2
	  40 1
	  
	  arr[0]=0
	  arr[2]=1
	  arr[1]=2
	  
	  0 2 1
	  
	  
	  
	  
	  */
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends