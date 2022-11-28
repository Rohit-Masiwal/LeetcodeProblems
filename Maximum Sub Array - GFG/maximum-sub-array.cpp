//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	   int currsum=0;
	   int maxsum=0;
	   int start=0,end=0;
	   int currstart=0;
	   vector<int> ans;
	   for(int i=0;i<n;i++){
	       if(a[i]<0){
	           currsum=0;
	           currstart=i+1;
	       }else{
	           currsum+=a[i];
	       }
	       
	       if(currsum>maxsum){
	           maxsum=currsum;
	           start=currstart;
	           end=i+1;
	       }else if(currsum==maxsum){
	           int currdis=i+1-currstart;
	           int maxdis=end-start;
	           if(currdis>maxdis){
	               start=currstart;
	               end=i+1;
	           }
	       }
	   }
	   
	   for(int i=start;i<end;i++) ans.push_back(a[i]);
	   if(ans.size()==0) return {-1};
	   return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends