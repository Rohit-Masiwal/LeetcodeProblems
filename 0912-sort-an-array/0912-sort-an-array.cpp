class Solution {
public:
    void mergesort(vector<int>&nums, int low, int mid, int high){
        // int n=mid-low+1;
        // int m=high-mid;
        // vector<int> l,r;
        // for(int i=0;i<n;i++) l.push_back(nums[low+i]);
        // for(int i=0;i<m;i++) r.push_back(nums[mid+1+i]);
        // int i=0,j=0,k=low;
        // while(i<n && j<m){
        //     if(l[i]<=r[j])
        //         ans.push_back(l[i++]);
        //     else
        //         ans.push_back(r[j++]);
        //     k++;
        // }
        // while(i<n){
        //     ans.push_back(l[i++]);
        //     k++;
        // }
        // while(j<m){
        //     ans.push_back(r[j++]);
        //     k++;
        // }
        vector<int> ans;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                ans.push_back(nums[left]);
                left++;
            }else{
                ans.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid) ans.push_back(nums[left++]);
        while(right<=high) ans.push_back(nums[right++]);
        for(int i=low;i<=high;i++) nums[i]=ans[i-low];
    }
    void merge(vector<int>&nums, int low, int high){
        if(low<high) {
            int mid=(low+high)/2;
            merge(nums,low,mid);
            merge(nums,mid+1,high);
            mergesort(nums,low,mid,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        //vector<int> ans(nums.size());
        merge(nums,low,high);
        return nums;
    }
};