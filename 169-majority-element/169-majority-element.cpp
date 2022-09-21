class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)    mp[nums[i]]++;
        // for(int i=0;i<n;i++){
        //     if(mp[nums[i]]>n/2) return nums[i];
        // }
        int pos=0,maxx=INT_MIN;
        for(auto x:mp) {
            if(maxx<x.second){
                maxx=x.second;
                pos=x.first;
            }
        }
    return pos;
    }
};