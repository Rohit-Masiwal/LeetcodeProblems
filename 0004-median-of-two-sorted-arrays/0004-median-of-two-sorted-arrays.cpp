class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans=0;
        vector<int> v;
        for(auto x:nums1) v.push_back(x);
        for(auto x:nums2) v.push_back(x);
        sort(v.begin(),v.end());
        int n=v.size();
        if(n%2==0) 
            ans=(v[n/2]+v[n/2-1])/2.0;
        else
            ans=v[n/2];
        return ans;
    }
};