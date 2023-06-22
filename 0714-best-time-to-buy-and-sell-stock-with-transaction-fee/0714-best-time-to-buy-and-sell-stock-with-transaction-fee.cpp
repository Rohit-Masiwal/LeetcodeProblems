class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        int buy=0,sell=0,curBuy,curSell;
        for(int i=n-1;i>=0;i--){
            curSell=max(prices[i]+buy,0+sell);
            curBuy=max(-prices[i]-fee+sell,0+buy);
            buy=curBuy;
            sell=curSell;
        }
        return buy;
    }
};