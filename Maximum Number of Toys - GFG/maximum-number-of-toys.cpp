//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int solve(vector<int>& Queries ,vector<long long>&sum,vector<vector<int>>& arr,unordered_map<int,int>&new_ind){
        long long val = Queries[0];
        int cnt = 0;
        int s = 0;
        int e = sum.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(sum[mid]<=val){
                cnt = mid + 1;
                s = mid + 1;
            }
            else e = mid - 1;
        }
        int ans = 0;
        unordered_set<int> st;
        long long cur_sum = val - sum[cnt-1];
        for(int i=2;i<Queries.size();i++){
            if(new_ind[Queries[i]]<=cnt){
                cur_sum+=arr[new_ind[Queries[i]]-1][0];
                ans--;
            } 
            st.insert(new_ind[Queries[i]]);
        }
        for(int i=cnt;i<arr.size();i++){
            if(arr[i][0]>cur_sum) break;
            if(st.count(i+1)) continue;
            ans++;
            cur_sum-=arr[i][0];
        }
      return ans+cnt;
}
  vector<int> maximumToys(int N,vector<int> A,int Q,vector<vector<int>> q){
     vector<vector<int>> v;
     for(int i=0;i<N;i++)   v.push_back({A[i],i});
     sort(v.begin(),v.end());
     unordered_map<int,int> un;
     vector<long long> res(N);
     res[0]=v[0][0];
     un[v[0][1]+1]=1;
     for(int i=1;i<N;i++){
         res[i]=res[i-1]+v[i][0];
         un[v[i][1]+1]=i+1;
     }
     vector<int> ans(q.size());
     for(int i=0;i<q.size();i++){
         int count=solve(q[i],res,v,un);
         ans[i]=count;
     }
     return ans;
  }
};

//{ Driver Code Starts.
int main() {
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    int N;
    cin>>N;
    vector<int>A(N);
    for(auto &i:A){
      cin>>i;
    }
    int Q;
    cin>>Q;
    vector<vector<int>> Queries(Q);
    for(int i=0;i<Q;i++){
      int x,y;
      cin>>x>>y;
      Queries[i].push_back(x);
      Queries[i].push_back(y);
      for(int j=0;j<Queries[i][1];j++){
        cin>>x;
        Queries[i].push_back(x);
      }
    }
    Solution obj;
    auto ans =obj.maximumToys(N,A,Q,Queries);
    for(auto i:ans)
      cout<<i<<" ";
    cout<<endl;
 }
}
// } Driver Code Ends