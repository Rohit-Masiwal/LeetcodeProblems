class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1=INT_MAX, buy2=INT_MAX, sell1=INT_MIN, sell2=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            buy1=min(buy1, prices[i]);
            //cout<<buy1<<" ";
            sell1=max(sell1, prices[i]-buy1);
            //cout<<sell1<<" ";
            buy2=min(buy2, prices[i]-sell1);
            //cout<<buy2<<" ";
            sell2=max(sell2, prices[i]-buy2);
            //cout<<sell2<<"\n";
        }
        return sell2;
    }
};