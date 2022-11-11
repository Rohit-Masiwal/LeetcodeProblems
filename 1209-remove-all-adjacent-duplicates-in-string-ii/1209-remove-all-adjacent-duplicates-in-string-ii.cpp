class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>> v;
        for(auto x:s){
            if(v.size()==0 || v.back().first!=x)
                v.push_back({x,1});
            else
                v.back().second++;
            if(v.back().second==k)
                v.pop_back();
        }
        string ans;
        for(auto x:v){
            ans.append(x.second,x.first);
        }
        return ans;
    }
};