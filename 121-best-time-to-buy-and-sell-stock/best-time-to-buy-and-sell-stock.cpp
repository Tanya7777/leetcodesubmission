class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy = prices[0];
        for(int k=1;k<prices.size();k++){
            if(prices[k]>buy){
                profit =max(profit, prices[k]-buy);
            } else
            buy = prices[k];
        }
        return profit;
    }
};