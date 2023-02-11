class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        int sell=-prices[0],buy=0;
        for(int i=1;i<n;i++){
            buy=max(buy,sell+prices[i]-fee);
            cout<<buy<<" ";
            sell=max(sell,buy-prices[i]);
            cout<<sell<<"\n";
        }
        return buy;
        
    }
};