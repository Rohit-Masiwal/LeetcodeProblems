class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(),potions.end());
        for(long long x:spells){
            int low=0;
            int high=potions.size()-1;
            int count=0;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(x*potions[mid]>=success){
                    count+=high-mid+1;
                    high=mid-1;
                }else if(x*potions[mid]<success)
                    low=mid+1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};