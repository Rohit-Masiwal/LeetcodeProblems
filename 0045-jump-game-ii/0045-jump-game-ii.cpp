class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int count=0,maxx=0,j=0;
        for(int i=0;i<n-1;i++){
            maxx=max(maxx,i+nums[i]);
            if(i==j){
                count++;
                j=maxx;
            }
        }
        return count;
    }
};