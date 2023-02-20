class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int n=nums.size();
        int start=0, end=n-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==t) return mid;
            if(nums[mid]<=t)
                start=mid+1;
            else
                end=mid-1;
        }
        return start; 
    }
};