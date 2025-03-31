class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxProfit = 0;

        for(int price : prices){
            maxProfit = max(maxProfit , price-min_price);
            min_price = min(min_price , price);
        }
        return maxProfit;
    }
};