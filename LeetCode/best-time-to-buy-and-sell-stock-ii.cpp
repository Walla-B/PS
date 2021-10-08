class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int maxprofit = 0;
        int prev = prices[0];
        
        for (int i = 1 ; i < size; i++) {
            
            int surplus = prices[i] - prev;
            if (surplus> 0) {
                maxprofit += surplus;
            }
            prev = prices[i];
        }
        
        return maxprofit;
    }
};