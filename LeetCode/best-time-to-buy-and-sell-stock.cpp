class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit = 0;
        
        vector<int>::iterator iter;
        
        for (iter = prices.begin(); iter < prices.end(); iter++) {
            minprice = min(minprice, *iter);
            maxprofit = max(maxprofit, *iter-minprice);

        }
        return maxprofit;
    }
};