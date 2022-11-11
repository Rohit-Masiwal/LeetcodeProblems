class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>> st;
        vector<int> ans;
        int n=t.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first<=t[i]) st.pop();
            int res=((!st.empty()))?st.top().second-i:0;
            ans.push_back(res);
            st.push({t[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};