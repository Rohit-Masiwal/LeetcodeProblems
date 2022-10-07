class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        vector<bool> ans;
        vector<int> v;
        for(auto x:candies) v.push_back(x+extra);
        int n=*max_element(candies.begin(),candies.end());
        for(auto x:v){
            if(x>=n)
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        return ans;
    }
};