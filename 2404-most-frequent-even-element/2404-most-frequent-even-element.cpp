class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        // if(nums.size()<=1) return nums[0];
        // map<int,int> mp;
        // for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        // vector<int> v;
        // int pos,maxx=INT_MIN;
        // for(auto x:mp){
        //     if(x.second>1 && x.first%2==0){
        //         v.push_back(x.first);
        //     }
        // }
        // sort(v.begin(),v.end());
        // if(v.size()==0) return -1;
        // return v[0];
        int ans=-1, mx =INT_MIN;
        map<int, int> m;
        for (auto x : nums) m[x]++;
        for (auto x : m) {
            if (x.first % 2 == 0 && x.second > mx) {
                mx = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};