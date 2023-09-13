class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> l(n,1);
        vector<int> r(n,1);
        vector<int> ans;
        for(int i=1;i<n;i++) {
            if(ratings[i-1]<ratings[i]) 
                l[i]=l[i-1]+1;
        }
        for(int i=n-2;i>=0;i--) {
            if(ratings[i]>ratings[i+1]) 
                r[i]=r[i+1]+1;
        }
        // for(auto x:l) cout<<x<<" ";
        // cout<<"\n";
        // for(auto x:r) cout<<x<<" ";
        for(int i=0;i<n;i++) {
            ans.push_back(max(l[i],r[i]));
        }
        int res=0;
        for(auto x:ans) res+=x;
        return res;
    }
};