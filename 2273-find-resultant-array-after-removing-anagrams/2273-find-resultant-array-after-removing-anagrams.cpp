class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        // unordered_map<string,int>mp;
        // for(auto x:words){
        //     string temp=x;
        //     sort(x.begin(),x.end());
        //     mp[x]=1;
        // }
        // //for(auto x:mp) cout<<x.first<<" "<<x.second<<"\n";
        // for(auto x:mp) ans.push_back(x.first);
        stack<string> st;
        for(auto x:words){
            if(!st.empty()){
                string res=x;
                string res2=st.top();
                sort(res2.begin(),res2.end());
                sort(res.begin(),res.end());
                if(res2!=res) st.push(x);
            } else st.push(x);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};