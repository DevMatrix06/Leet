class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0];
         int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<bestbuy){
                bestbuy=min(prices[i],bestbuy);
            }
            maxProfit=max(maxProfit,prices[i]-bestbuy);
        }
        return maxProfit;
        
    }
};