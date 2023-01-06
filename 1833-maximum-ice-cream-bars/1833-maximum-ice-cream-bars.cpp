class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        for(auto x:costs){
            if(coins<1 || coins<x) 
                break;
            else{
                coins-=x;
                count++;
            }
        }
        return count;
    }
};