class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        int ans=0;
        for(auto x:tasks) mp[x]++;
        for(auto x:mp){
            if(x.second==1) return -1;
            if(x.second%3==0)
                ans+=x.second/3;
            else
                ans+=(x.second/3)+1;
        }
        /*
        2 3
        3 2
        4 5
        */
        return ans;
    }
};