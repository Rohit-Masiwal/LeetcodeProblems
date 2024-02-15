class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long ans=0;
        sort(nums.begin(),nums.end());
        /*
            1 1 2 3 5 12 50
          s=1 2 4 7 12 24 74
          
        */
        long long sum=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]<sum) ans=sum+nums[i];
            sum+=nums[i];
            //cout<<sum<<" ";
        }
        return ans==0 ? -1:ans;
    }
};