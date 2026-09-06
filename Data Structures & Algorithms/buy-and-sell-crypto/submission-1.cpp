class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest = prices[0];
        int best = 0;

        for (int i = 0; i < prices.size(); i++) {
            if(prices[i] < cheapest ) {
                cheapest = prices[i];
            }
            if (prices[i] - cheapest > best) {
                best = prices[i] - cheapest;
            }
        }
        return best;
    }
};
