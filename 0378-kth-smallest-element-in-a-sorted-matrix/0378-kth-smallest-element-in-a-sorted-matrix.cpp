class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> res;
        for(auto x:matrix){
            for(auto y:x) res.push_back(y);
        }
        sort(res.begin(),res.end());
        // int low=0,high=res.size()-1;
        // while(low<=high){
        //     int mid=(low+high)/2;
        //     if(res[mid]==k)
        // }
        return res[k-1];
    }
};