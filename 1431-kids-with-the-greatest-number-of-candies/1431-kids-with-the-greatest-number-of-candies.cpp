class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxx= *max_element(candies.begin(),candies.end());
        for(auto x:candies){
            if(x+extraCandies >= maxx)
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        return ans;
    }
};