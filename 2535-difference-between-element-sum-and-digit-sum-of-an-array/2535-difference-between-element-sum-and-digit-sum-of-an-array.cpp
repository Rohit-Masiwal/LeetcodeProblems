class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int esum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]>=10){
                int n=nums[i];
                while(n>0){
                    esum+=n%10;
                    n=n/10;
                }
            }else esum+=nums[i];
        }
        //cout<<sum<<" "<<esum;
        return abs(sum-esum);
    }
};