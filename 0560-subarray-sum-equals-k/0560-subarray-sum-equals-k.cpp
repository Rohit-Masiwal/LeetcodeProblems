class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> un;
        int sum=0,count=0,n=nums.size();
        for(int i=0;i<n;i++){
            un[sum]++;
            sum+=nums[i];
            int a=sum-k;
            count=count+un[a];
        }
        return count;
    }
};