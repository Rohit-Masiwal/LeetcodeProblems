class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) { 
        set<vector<int>> st;
        int n = nums.size(), m = (1<<n);
        for(int i = 3; i < m; i++){    
            vector<int> temp;
            int prv = INT_MIN;
            for(int j = 0; j < n; j++){
                if(prv <= nums[j] && (i & (1<<j)))   temp.push_back(nums[j]),   prv = nums[j];
            }
            if(temp.size() > 1)  st.insert(temp);
        }
        vector<vector<int>> res;
        for(auto e : st)   res.push_back(e);

        return res;
    }
};