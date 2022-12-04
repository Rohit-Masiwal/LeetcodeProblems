class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long total=0;
        for(auto x:nums) total+=x;
        //cout<<total;27
        int n=nums.size();
        int m=n-1;
        long long sum=0;
        int a=1;
        int ans=INT_MAX,res=0,pos=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(i==n-1) res=sum/a++;
            else res=abs((sum/a++)-((total-sum)/m--));
            // cout<<res<<" "<<i<<"\n";
            // cout<<(sum/a++)<<" "<<((total-nums[i])/m--)<<"\n";
            if(ans>res) {
                ans=res;
                pos=i;
            }
        }
        return pos;
    }
};