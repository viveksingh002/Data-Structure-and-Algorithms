class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimumprice=prices[0];
        int profit = 0;
        for(int i = 1;i<prices.size();i++){
            if(prices[i]<minimumprice){
                minimumprice=prices[i];
            }else if(profit<prices[i]- minimumprice){
                profit = prices[i]-minimumprice;
            }
        }
        return profit;
    }
};