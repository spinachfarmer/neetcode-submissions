class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int b = 0;
        int s = 1; // always want to move r forward since can only sell after buy 
        int maxP = 0;
        int tempP;

        for (s = 1; s < size; s++){ // always have to buy before sell
            if(prices[s] < prices[b]){ // wnat to update b to s so that the b is the lowest price seen so far
                b = s; // if sell price is less than buy (want to buy at smaller price)
            }
            tempP = prices[s] - prices[b];
            maxP = max(maxP, tempP);
        }
        return maxP;
    }
};
