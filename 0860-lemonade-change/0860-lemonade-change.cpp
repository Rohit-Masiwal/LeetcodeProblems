class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0, ten=0;
        for(int i=0;i<bills.size();i++) {
            if(bills[i]==5) five++;
            else if(bills[i]==10) {
                ten++;
                if(five==0) return false;
                else five--;
            } else {
                if(ten>=1) {
                    if(five>=1) {
                        ten--;
                        five--;
                    }
                    else return false;
                }
                else if(five>=3) five-=3;
                else return false;
            }
        }
        return true;
    }
};