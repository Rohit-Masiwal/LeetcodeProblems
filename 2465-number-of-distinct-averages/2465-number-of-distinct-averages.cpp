class Solution {
public:
    int distinctAverages(vector<int>& nums) {
      //0 1 3 4 4 5   
        sort(nums.begin(),nums.end());
        vector<float> ans;
        int n=nums.size();
        int j=n-1;
        for(int i=0;i<n/2;i++){
            ans.push_back((nums[i]+nums[j])/2.0);
            j--;
        }
        //for(auto x:ans) cout<<x<<" ";
        map<float,int> mp;
        int count=0;
        for(auto x:ans) mp[x]++;
        for(auto x:mp) count++;
        return count;
    }
};