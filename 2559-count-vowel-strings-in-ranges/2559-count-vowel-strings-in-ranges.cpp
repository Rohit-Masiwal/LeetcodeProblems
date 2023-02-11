class Solution {
public:
    bool check(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ) return 1;
        return 0;
    }
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& x) {
        vector<int> ans;
        int n=w.size();
        vector<int> res(n);
        for(int i=0;i<n;i++){
            if(check(w[i][0]) && check(w[i][w[i].size()-1])) {
                if(i==0) res[0]=1;
                else res[i]=res[i-1]+1;
            }
            else {
                if(i==0) res[0]=0;
                else res[i]=res[i-1];
            }
        }
        for(auto x:res) cout<<x<<" ";
        for(int i=0;i<x.size();i++) {
            int l=x[i][0]; //queries[0][0]
            int r=x[i][1]; //x[]
            if(l==0) ans.push_back(res[r]);
            else ans.push_back(res[r]-res[l-1]);
        }
        return ans;
    }
};