class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,neg=0;
        for(auto x:nums){
            if(x>0)
                pos++;
            else if(x==0) continue;
            else neg++;
        }
        //cout<<pos<<" "<<neg;
        return ((pos>neg)? pos:neg);
    }
};