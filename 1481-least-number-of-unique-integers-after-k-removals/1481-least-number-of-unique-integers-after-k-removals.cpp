class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> mp;
        for(auto x:arr) mp[x]++;
        vector<int> res;
        for(auto x:mp) res.push_back(x.second);
        /* 
        3 3
        1 2
        4 1
        2 1
        k=3
        [2,4,1,8,3,5,1,3]
        k=3
        2 1
        4 1
        8 1
        5 1
        1 2
        3 2
        */
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++) {
            k-=res[i];
            if(k<0) return res.size()-i;
        }
        return 0;
    }
};