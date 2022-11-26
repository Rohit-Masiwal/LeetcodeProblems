class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const long M=1e9+7;
        stack<int> st,st2;
        vector<int> nse,pse;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            int res=(!st.empty())?st.top():n;
            nse.push_back(res);
            st.push(i);
        }
        reverse(nse.begin(),nse.end());
        for(int i=0;i<n;i++){
            while(!st2.empty() && arr[st2.top()]>=arr[i]) st2.pop();
            int res=(!st2.empty())?st2.top():-1;
            pse.push_back(res);
            st2.push(i);
        }
        map<vector<int>,vector<int>> mp;
        for(int i=0;i<n;i++) {
            mp[{arr[i],pse[i],nse[i]}].push_back(i);
        }
        int res=0;
        for(auto x:mp) {
            if(x.second.size()>1) {
                int l=x.first[1];
                int r=x.first[2];
                int num=0;
                for(int i=0;i<=x.second.size();i++) {
                    int diff;
                    if(i==0) diff=x.second[i]-l-1;
                    else if(i==x.second.size()) diff=r-x.second[i-1]-1;
                    else diff=x.second[i]-x.second[i-1]-1;
                    num=(num+(diff*(diff+1))/2)%M;
                }
                num=((((r-l-1)*(r-l))/2)%M-num+M)%M;
                res=(res+(x.first[0]*num)%M)%M;
            }
            else {
                res=(res+((x.first[0]*(x.first[2]-x.second[0]))%M*(x.second[0]-x.first[1]))%M)%M;
            }
        }
        return res;
    }
};