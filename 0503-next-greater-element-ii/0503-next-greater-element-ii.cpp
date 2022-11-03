class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        vector<int> nums1=nums;
        for(auto x:nums1) nums.push_back(x);
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<= nums[i]) st.pop();
            int res=((!st.empty()))?st.top():-1;
            ans.push_back(res);
            st.push(nums[i]);
        }/*
        [1,5,3,6,8]  
        [5,6,5,8,-1]
        [5,6,6,8,-1]
        */
        //for(auto x:ans) cout<<x<<" ";
        reverse(ans.begin(),ans.end());
        vector<int> ans1;
        for(int i=0;i<nums1.size();i++) ans1.push_back(ans[i]);
        return ans1;
    }
};