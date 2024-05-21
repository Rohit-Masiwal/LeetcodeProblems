class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        /*
        n=3 11
        1<<n -> 6
        110 -> 6
        1>>n -> 1
        1
        
         n=3 [1,4,5]
         000 -> []
         001 -> [5]
         010 -> [4]
         011 -> [4,5]
         100 -> [3]
         101 -> [3,5]
         110 -> [3,4]
         111 -> [3,4,5]
        */
        for(int i=0;i< 1<<n;i++) {
            vector<int> elements;
            for(int j=0;j<n;j++) {
                if( i & 1<<j) {
                    elements.push_back(nums[j]);
                }
            }
            ans.push_back(elements);
        }
        
        return ans;
    }
};