class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_sale = prices[0];
        int best  = 0;
        for(int i = 1 ;  i < prices.size(); i++){
            best = max(best, prices[i] - min_sale);
            min_sale = min(min_sale, prices[i]);
        }
        return best;
    }; 
};