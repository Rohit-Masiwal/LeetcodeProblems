class Solution {
public:
    int bestClosingTime(string customers) {
        int currPenalty=0;
        for(auto x:customers) currPenalty++;
        int minPenalty=currPenalty;
        int ans=0;
        for(int i=0;i<customers.size();i++) {
            if(customers[i]=='Y')
                currPenalty--;
            else
                currPenalty++;
            if(currPenalty < minPenalty) {
                minPenalty = currPenalty;
                ans=i+1;
            }
        }
        return ans;
    }
};