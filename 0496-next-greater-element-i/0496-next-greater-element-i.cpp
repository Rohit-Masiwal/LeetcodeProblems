class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> un;
        vector<int> ans;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]) st.pop();
            un[nums2[i]]=((!st.empty()))? st.top():-1;
            st.push(nums2[i]);
        }
        for(auto x:nums1) ans.push_back(un[x]);
        return ans;
    }
};