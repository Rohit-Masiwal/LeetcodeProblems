class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> mp;
        int count=0,sum=0;
        mp[0]=1;
        for(auto x:nums){
            sum=(sum+x)%k;
            if(sum<0) sum+=k;
            if(mp.find(sum)!=mp.end()) count+=mp[sum];
            mp[sum]++;
        }
        return count;
/*
4,5,0,-2,-3,1
4 9 9 7 4 5 
4 4 4 2 4 0
*/
    }
};