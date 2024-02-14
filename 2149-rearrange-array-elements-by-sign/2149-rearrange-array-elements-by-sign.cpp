class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pe,ne;
        for(auto x:nums) {
            if(x>=0) 
                pe.push_back(x);
            else
                ne.push_back(x);
        }
        int i=0, j=0;
        vector<int> ans;
        while(i<pe.size() && j<ne.size()) {
            ans.push_back(pe[i++]);
            ans.push_back(ne[j++]);
        }
        while(i<pe.size()) {
            ans.push_back(pe[i++]);
        }
        while(j<ne.size()) {
            ans.push_back(ne[j++]);
        }
        return ans;
    }
};