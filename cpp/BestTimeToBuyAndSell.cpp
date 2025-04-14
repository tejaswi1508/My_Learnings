class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int min_buy = prices[0];
            int maxProfit = 0;
            for(int i=0;i<prices.size();i++){
                int current_Profit = prices[i] - min_buy;
                if(current_Profit > maxProfit) maxProfit = current_Profit;
                if(min_buy>prices[i]) min_buy = prices[i];
            }
            return maxProfit;
        }
    };